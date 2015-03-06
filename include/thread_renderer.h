#ifndef CIEQ_INCLUDE_THREAD_RENDERER_H_
#define CIEQ_INCLUDE_THREAD_RENDERER_H_

#include <queue>
#include <vector>
#include <mutex>

#include "smart_surface.h"

#include <cinder/gl/Texture.h>
#include <cinder/gl/Fbo.h>

namespace cieq {
class AudioNodes;
class ThreadRenderer
{
public:
	ThreadRenderer(AudioNodes&);

	void								update();
	void								setup();
	void								draw();
	SpectralSurface&					getSurface(int index, int pop_pos);
	std::size_t							getFramesPerSurface() const;
	std::size_t							getSurfaceIndexByQueryPos(std::size_t pos) const;
	std::size_t							getIndexInSurfaceByQueryPos(std::size_t pos) const;

private:
	using container_pair	= std::pair<SpectralSurfaceRef, ci::gl::TextureRef>;
	using container			= std::vector < container_pair >;
	container							mSurfaceTexturePool;
	std::mutex							mPoolLock;
	std::size_t							mFramesPerSurface;
	std::size_t							mFftSize;
	std::size_t							mNumSurfaces;
	AudioNodes&							mAudioNodes;
	std::size_t							mTotalSurfacesLength;
	std::size_t							mLastSurfaceLength;
	std::atomic<int>					mLastPopPos;
	ci::gl::Fbo							mCompleteAudioFbo;

private:
	void								cleanSurfaces();
	std::size_t							calculateLastSurfaceLength() const;
	std::size_t							calculateTotalSurfacesLength() const;
};

} // !namespace cieq

#endif // !CIEQ_INCLUDE_THREAD_RENDERER_H_