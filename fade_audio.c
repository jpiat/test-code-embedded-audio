#include <alsa/asoundlib.h>
#include <stdio.h>
#include <stdint.h>
#include <libavutil/frame.h>
#include <libavutil/mem.h>
#include <libavcodec/avcodec.h>


#define FADE_DURATION_MS 2000

int process_samples(int16_t * samples_in, int16_t * samples_out, uint32_t nb_samples){
	int nb_samples_processed = 0 ;
	//Process samples_in and store in samples_out. Return negative values if fail
	/**
	Step 3 : apply 0.5 gain to each sample before playback using the process sample function
	**/
        /**
        Step 4 :  activate 0.5 gain only when key 'f' is pressed
        **/
        /**
        Step 5 :  activate fade out to gain 0 with FADE_DURATION_MS duration if 'f' key is pressed. Activate fade in to gain 1.0 with FADE_DURATION_MS duration 'f' key release
        **/
	return nb_samples_processed ;
}

int main(int argc, char ** argv){
	/**
	Step 1 : read samples from a 16kHz@16bit wave file with name of the file given as program input. Samples must be read in buffers of ~512 samples
	**/
	for(;;){
		/**
		Step 2 : playback each buffer of samples on the machine audio output using asoundlib
		**/

		/**
		Step 3 : apply 0.5 gain to each sample before playback using the process sample function
		**/
	}

	/**
	Step 6 : document code using doxygen
	**/
	return 0 ;
}
