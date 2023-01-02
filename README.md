# MattMusicSDK
MattMusicSDK - xcFramework for audio playback of MP3, M4A, etc + real-time sample data (waveform, FFT spectrum + beat detection) for MacOS/iOS.

Simply add MattMusicSDK xcFramework to your MacOS or iOS project, send it the filename of a music or sound effect file
in your app bundle, call play, and get back real-time data: sample data for drawing the waveform, FFT spectrum bins and magnitudes,
and beat detection flag (for example to sync app events to the music beat).

