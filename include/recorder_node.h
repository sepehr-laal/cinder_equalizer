#ifndef CISTFT_INCLUDE_RECORDER_NODE_H_
#define CISTFT_INCLUDE_RECORDER_NODE_H_

#include <cinder/audio/SampleRecorderNode.h>

namespace cistft {
namespace audio {

/*!
 * \class RecorderNode
 * \namespace cistft::audio
 * \brief This class is a direct subclass of Cinder's BufferRecorder.
 * It keeps track of where the record position is, also it keeps the
 * original window size and the original user specified hop size.
 * 
 * \note ONLY main thread uses this class to ask for samples to be
 * sent to worker FFT threads.
 *
 * \note Two main tasks are performed within this class:
 * 1 - Audio recording and keeping track of recorder position
 * 2 - Keeping track of Where main thread last left off asking for samples
 */
class RecorderNode : public ci::audio::BufferRecorderNode
{
public:
	class Format : public ci::audio::BufferRecorderNode::Format
	{
	public:
		//! Sets the window size, the number of samples that are recorded for one 'window' into the audio processor thread.
		//! Default is 1024.
		//! \note will be rounded up to the nearest power of two. (via zero padding)
		Format&		windowSize(size_t size)		{ mWindowSize = size; return *this; }
		//! Sets the hop size, the number of samples to skip to get next window. default is 256 samples
		Format&		hopSize(size_t size)		{ mHopSize = size; return *this; }
		//! Returns the window size.
		size_t		getWindowSize() const		{ return mWindowSize; }
		//! Returns the hop size.
		size_t		getHopSize() const			{ return mHopSize; }

	protected:
		size_t		mWindowSize{ 1024 };
		size_t		mHopSize{ 256 };
	};

	//! Constructs a RecorderNode and initializes its buffer to be large enough to hold \a numFrames frames.
	RecorderNode(size_t numFrames, const Format &format = Format());

	//! answers the raw internal recording buffer. Not thread safe.
	ci::audio::BufferDynamic&		getBufferRaw();
	//! answers the current window size set for returned sample via pop operation
	size_t							getWindowSize() const;
	//! answers the current hop size set for returned sample via pop operation
	size_t							getHopSize() const;
	//! copies a chunk of the recording buffer inside another buffer. Not thread safe.
	void							getBufferChunk(size_t start, size_t len, ci::audio::Buffer& other);
	//! copies a chunk (window size) of the recording buffer inside another buffer. Not thread safe.
	void							getBufferChunk(size_t start, ci::audio::Buffer& other);
	//! pops a window size chunk and moves the internal pointer, hop size to the forward. Not thread safe.
	void							queryBufferWindow(ci::audio::Buffer& other, size_t query_pos);
	bool							popBufferWindow(size_t& query_pos);
	//! answers if there's more pop operations left to do.
	bool							isRecording() const;
	//! resets the internal state
	void							reset();
	//! answers maximum possible number of processing operations
	size_t							getMaxPossiblePops() const;
	//! answers index of operation by write position
	size_t							getQueryIndexByQueryPos(size_t pos);

protected:
	size_t	mWindowSize;
	size_t	mHopSize;
	size_t	mLastQueried;
	size_t	mMaxPopsPossible;

private:
	using inherited = ci::audio::BufferRecorderNode;
};

}} // !namespace cistft

#endif // !CISTFT_INCLUDE_RECORDER_NODE_H_