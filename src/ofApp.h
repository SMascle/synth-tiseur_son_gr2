#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		void audioOut(ofSoundBuffer & buffer);
		void mouseScrolled(int x, int y, float scrollX, float scrollY);
		void fft(vector <float> audio, float sampleRate);
		
		ofSoundStream soundStream;
		ofImage title;
		ofImage title2;

		vector <float> fftA;
		float   octave; // variable du n° de l'octave.
		float 	pan;
		int		sampleRate;
		bool 	bNoise;
		float 	volume;
		int 	signal_type;
		float   t_start;
		size_t 	n_harmonics;
		float   aNoise;

		int filter;
		vector <float> vfilter;

		vector <float> audio;
		vector <float> carre;

		// Variable changement de theme :
		int R;
		int G;
		int B;
		int	BG_R;
		int	BG_G;
		int BG_B;
		int P_R;
		int P_G;
		int P_B;
		bool cbool;
		//-------------------------------
		
		//------------------- for the simple sine wave synthesis
		float 	targetFrequency;
		float 	phase;
		float 	phaseAdder;
		float 	phaseAdderTarget;
		float   ff; // ajout floatant ff
};
