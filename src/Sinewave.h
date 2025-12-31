// simple test, cba to split into .h and .cpp knowing itll be scrapped
// add to cmake and other shiet btw

#ifndef SINEWAVE_H
#define SINEWAVE_H

#include <juce_audio_basics/juce_audio_basics.h>

class Sine {
	public: 
		void prepare(double sampleRate) {
			currentSampleRate = sampleRate;
		}

		void process(juce::AudioBuffer<float>& buf) {
		
		}

	private: 
		// basic sine eq vars
		float amplitude = 0.2f;
		float freq = 311.13f; // middle Eb lol
		float currentSampleRate = 0.0f;
		float timeInc = 0.0f;
		float currTime = 0.0f;
}
