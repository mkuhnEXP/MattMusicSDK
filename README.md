# MattMusicSDK
MattMusicSDK - MacOS and iOS audio player xcFrameworks that give back real-time data (sound samples for drawing the waveform, FFT real and imaginary results for drawing a spectrum analyzer, and significant spectral flux detection for syncing events to the music dynamics) for M4A, MP3, etc

Simply add MattMusicSDK xcFramework to your MacOS or iOS project, send it the filenames (the SDK keeps a playlist internally) of music in your app bundle, call play, and it gives back real-time data: sound samples for drawing the waveform, FFT real and imaginary results for drawing a spectrum analyzer, and significant spectral flux detection for syncing events to the music dynamics. You can pause, resume or stop the music. You can jump to the next song in your playlist. The playlist can be configured to stop or re-start after the last music file is played. Fun: Any of the real-time data can be used to trigger events in your particular application or game.

Matt Kuhn

[If you find MattMusicSDK to your liking and used in your app or game... PayPal donate here](https://www.paypal.com/donate/?hosted_button_id=H3B7779F7KQMW)


Usage:

import MattMusicSDK


API:

func initialize() -> Bool

func addMusicFileInBundleToPlaylist(fileNameIncludingExtension fileUrlStr: String) -> Bool 

func playMusic() -> Bool

func getSamplesSize_akaN() -> Int

func getCurrentMusicSampleRate() -> Float

func getTheSamples() -> [Float]

func getFrequenciesReal() -> [Float] 

func getFrequenciesImaginary() -> [Float] 

func setDontRestartPlaylistOnceFinished(_ value: Bool) 

func pauseMusic()

func stopMusic()
 
func isPlaying() -> Bool

func isPaused() -> Bool

func isStopped() -> Bool

func jumpToNextSong() 

func isSignificantSpectralFluxDetected() -> Bool 

func getCurrentMusicFilename() -> String

func cleanup()
 
