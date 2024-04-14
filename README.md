# MattMusicSDK

Now 'MattMusicSDK2' - multiplatform xcFramework for macOS, iOS, and iOS Simulator -- audio player xcFramework that gives back real-time data (sound samples for drawing the waveform, FFT real and imaginary results for drawing a spectrum analyzer, and significant spectral flux detection for syncing events to the music dynamics) for M4A, MP3, etc

Supports: macOS >= 13.5, iOS >= 17.2 and iOS Simulator.

Simply add 'MattMusicSDK2.xcFramework' to your macOS or iOS project, send it the filenames (the SDK keeps a playlist internally) of music in your app bundle, call startPlayingPlaylist(), and real-time data is available: sound samples for drawing the waveform, FFT real and imaginary results for drawing a spectrum analyzer, and significant spectral flux detection for syncing events to the music dynamics. You can pause, resume or stop the music. You can jump to the next song in your playlist. Fun: Any of the real-time data can be used to trigger events in your particular application or game.

Matt Kuhn

[If you find MattMusicSDK to your liking and used in your app or game... PayPal donate here](https://www.paypal.com/donate/?hosted_button_id=H3B7779F7KQMW)


Example usage:

    import MattMusicSDK2
 
    .
    .
    .

    initialize()
    
    addSongInBundleToPlaylist(filenameWithExtension: "music1.mp3")
    addSongInBundleToPlaylist(filenameWithExtension: "music2.mp3")
    addSongInBundleToPlaylist(filenameWithExtension: "music3.mp3")
    // ...
    startPlayingPlaylist()
    

In your main update loop:

    let theSamples: [Float] = getTheSamples() 
    
    // draw the waveform from 'theSamples'
    
    .
    .
    .
   
    let theFreqsReal: [Float] = getFrequenciesReal()
    let theFreqsImaginary: [Float] = getFrequenciesImaginary()
    
    // draw the spectrum using from 'theFreqsReal' annd 'theFreqsImaginary':
    //
    //   fyi how to calculate magnitude for each frequency index:
    //
    //         let realSquared: Float = abs(theFreqsReal[i]) * abs(theFreqsReal[i])
    //         let imaginarySquared: Float = abs(theFreqsImaginary[i]) * abs(theFreqsImaginary[i])
    //         let magnitude = sqrt(realSquared + imaginarySquared)

    .
    .
    .
    
    let isBeatDetected = isBeatDetected()
    
    // sync app or game events to music dynamics
    
    .
    .
    .
    

Full API:

func initialize() -> Bool

func addSongInBundleToPlaylist(filenameWithExtension fileUrlStr: String) -> Bool 

func startPlayingPlaylist() -> Bool

func getCurrentMusicFilename() -> String

func getCurrentMusicSampleRate() -> Float

func pauseMusic()

func resumeMusic()

func stopMusic()
 
func isPlaying() -> Bool

func isPaused() -> Bool

func isStopped() -> Bool

func jumpToNextSong() 

func getTheSamples() -> [Float] // N = 2048

func getFrequenciesReal() -> [Float]  // N = 512

func getFrequenciesImaginary() -> [Float]  

func isBeatDetected() -> Bool 

func unintializeAndCleanup() // NOTE: call stopMusic() first. Also resets playlist to empty.

[If you find MattMusicSDK to your liking and used in your app or game... PayPal donate here](https://www.paypal.com/donate/?hosted_button_id=H3B7779F7KQMW)
 
