#ifndef CIEQ_INCLUDE_STFT_CLIENT_H_
#define CIEQ_INCLUDE_STFT_CLIENT_H_

#include "work_client.h"

#include <cinder/audio/dsp/Dsp.h>

namespace cieq {
class AppGlobals;
namespace stft {

/*!
 * \class Client
 * \namespace cieq::stft
 * \brief a Client that will fork requests for performing STFT.
 * \note owns one Fft class and one WindowTable per thread.
 */
class Client : public work::Client
{
public:
	class Format
	{
	public:
		Format&			windowSize(std::size_t size);
		Format&			fftSize(std::size_t size);
		Format&			channels(std::size_t size);
		Format&			windowType(ci::audio::dsp::WindowType type);

		std::size_t		getWindowSize() const;
		std::size_t		getFftSize() const;
		std::size_t		getChannelSize() const;
		ci::audio::dsp::WindowType
						getWindowType() const;

	private:
		std::size_t		mWindowSize;
		std::size_t		mFftSize;
		std::size_t		mChannels;
		ci::audio::dsp::WindowType
						mWindowType;
	};

public:
	Client(work::Manager&, AppGlobals* = nullptr, Format fmt = Format());
	void			handle(work::RequestRef) override;

private:
	Format			mFormat;
	AppGlobals*		mGlobals;
};

}} // !namespace cieq::stft

#endif // !CIEQ_INCLUDE_STFT_CLIENT_H_