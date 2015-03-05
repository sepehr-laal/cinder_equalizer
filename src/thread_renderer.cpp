#include "thread_renderer.h"
#include "audio_nodes.h"
#include "recorder_node.h"

#include <cinder/app/App.h>

namespace cieq {

ThreadRenderer::ThreadRenderer(AudioNodes& nodes, std::size_t frames_per_surface, std::size_t fft_size)
	: mFramesPerSurface(frames_per_surface)
	, mFftSize(fft_size)
	, mAudioNodes(nodes)
	, mLastPopPos(0)
	, mLastSurfaceLength(0)
	, mTotalSurfacesLength(0)
{
	mNumSurfaces = mAudioNodes.getBufferRecorderNode()->getMaxPossiblePops() / mFramesPerSurface;
	if (mAudioNodes.getBufferRecorderNode()->getMaxPossiblePops() % mFramesPerSurface != 0)
		mNumSurfaces += 1;

	mSurfaceTexturePool.resize(mNumSurfaces);

	mLastSurfaceLength = calculateLastSurfaceLength();
	mTotalSurfacesLength = calculateTotalSurfacesLength();
}

void ThreadRenderer::update()
{
	for (container_pair& pair : mSurfaceTexturePool)
	{
		if (pair.first && pair.first->allRowsTouched())
		{
			if (pair.second)
				pair.second->update(*pair.first);
			else
				pair.second = ci::gl::Texture::create(*pair.first);

			pair.first.reset();
		}
	}

	// loop recording endlessly
	if (!mAudioNodes.getBufferRecorderNode()->isRecording())
	{
		/*mAudioNodes.getBufferRecorderNode()->start();
		mAudioNodes.getBufferRecorderNode()->reset();
		cleanSurfaces();*/
	}
}

void ThreadRenderer::draw()
{
	ci::gl::pushMatrices();
	ci::gl::clear(ci::Color::black());
	ci::gl::rotate(90.0f); //rotate scene 90 degrees

	// just a convenience
	auto _recorder_node = mAudioNodes.getBufferRecorderNode();

	const float _y_scale = 2.0f;
	const float _x_scale = static_cast<float>(ci::app::getWindowWidth()) / mTotalSurfacesLength;

	// get current record position
	const int _current_write_pos = mLastPopPos;
	// percentage of the entire audio done recording
	const float _percentage_done = static_cast<float>(_current_write_pos) / _recorder_node->getNumFrames();
	// get the index of last active surface for drawing
	int _current_last_surface = static_cast<int>(_percentage_done * mNumSurfaces);
	// number of samples that will be empty drawn (last surface)
	// get last thread-reported pop position and divide it over max pops possible
	const float _current_index_in_surface = static_cast<float>(getIndexInSurfaceByQueryPos(mLastPopPos));
	// shift to left for OpenGL (we're moving textures upside-down, therefore we shift one entire surface to right + estimate index in surface + static offset)
	const float _shift_right = static_cast<float>(_current_index_in_surface - mLastSurfaceLength) - (1.0f / _x_scale) * ci::app::getWindowWidth();
	const float _shift_up = (1.0f / _y_scale - 1.0f) * ci::app::getWindowHeight();

	ci::gl::scale(_y_scale, _x_scale);
	ci::gl::translate(_shift_up, _shift_right); //after rotation, moving x is like moving y

	for (int index = _current_last_surface, count = 0;index >= 0; --index, ++count)
	{
		const auto x1 = static_cast<float>(mFftSize);
		const auto y1 = static_cast<float>(count + 1) * mFramesPerSurface;
		const auto x2 = 0.0f;
		const auto y2 = static_cast<float>(count)* mFramesPerSurface;

		ci::Rectf draw_rect(x1, y1, x2, y2);

		if (mSurfaceTexturePool[index].first)
		{
			// draw surface
			ci::gl::draw(*mSurfaceTexturePool[index].first, draw_rect);
		}
		else if (mSurfaceTexturePool[index].second)
		{
			// draw texture
			ci::gl::draw(mSurfaceTexturePool[index].second, draw_rect);
		}
	}

	ci::gl::popMatrices();
}

SpectralSurface& ThreadRenderer::getSurface(int index, int pop_pos)
{
	// if surface does not exist
	if (!mSurfaceTexturePool[index].first)
	{
		// lock and construct the surface
		std::lock_guard<std::mutex> _lock(mPoolLock);
		if (!mSurfaceTexturePool[index].first) //double check
		{
			mSurfaceTexturePool[index].first = std::make_unique<SpectralSurface>(mFftSize, getFramesPerSurface());
		}
	}
	
	mLastPopPos = pop_pos; //no lock needed, atomic
	return *(mSurfaceTexturePool[index].first);
}

std::size_t ThreadRenderer::getFramesPerSurface() const
{
	return mFramesPerSurface;
}

std::size_t ThreadRenderer::getSurfaceIndexByQueryPos(std::size_t pos) const
{
	const auto pop_index = mAudioNodes.getBufferRecorderNode()->getQueryIndexByQueryPos(pos);
	std::cout << "pop: " << pop_index << " pos: " << pos << " sindex: " << pop_index / getFramesPerSurface() << std::endl;
	return pop_index / getFramesPerSurface();
}

std::size_t ThreadRenderer::getIndexInSurfaceByQueryPos(std::size_t pos) const
{
	const auto pop_index = mAudioNodes.getBufferRecorderNode()->getQueryIndexByQueryPos(pos);
	return pop_index % getFramesPerSurface();
}

void ThreadRenderer::cleanSurfaces()
{
	for (container_pair& pair : mSurfaceTexturePool)
	{
		if (pair.first)
		{
			pair.first.reset();
		}
	}
}

std::size_t ThreadRenderer::calculateLastSurfaceLength() const
{
	const auto _max_pops = mAudioNodes.getBufferRecorderNode()->getMaxPossiblePops();
	const auto _max_num_pops_in_surfaces = mNumSurfaces * mFramesPerSurface;
	const auto _actual_minus_real_diff = _max_num_pops_in_surfaces - _max_pops;
	return getFramesPerSurface() - _actual_minus_real_diff;
}

std::size_t ThreadRenderer::calculateTotalSurfacesLength() const
{
	const auto _max_pops = mAudioNodes.getBufferRecorderNode()->getMaxPossiblePops();
	const auto _max_num_pops_in_surfaces = mNumSurfaces * mFramesPerSurface;
	const auto _actual_minus_real_diff = _max_num_pops_in_surfaces - _max_pops;
	return (mNumSurfaces * mFramesPerSurface) - _actual_minus_real_diff;
}

} //!cieq