# MattMusicSDK
MattMusicSDK - xcFramework for audio playback of MP3, M4A, etc + real-time data (sound samples for waveform, FFT real and complex results + spectrum bins & magnitudes, plus beat detection) for MacOS and iOS.

Simply add MattMusicSDK xcFramework to your MacOS or iOS project, send it the filenames (the SDK keeps a playlist internally) of music in your app bundle, call play, and it gives back real-time data: sample data for drawing the waveform, FFT real and complex results + spectrum bins and magnitudes for drawing a spectrum analyzer, and beat detection for syncing events to the music beat. You can pause or jump to the next song in your playlist. The playlist can be configured to stop or re-start after the last music file is played. Fun: Any of the real-time data can be used to trigger events in your particular application or game.

Matt Kuhn
