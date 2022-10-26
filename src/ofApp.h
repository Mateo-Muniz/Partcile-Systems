#pragma once

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void resetParticles();

		void keyPressed(int key);
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
		bool isRecording;
		bool Playback;
		float timer;
		string inputs;

		particleMode currentMode;
		string currentModeStr; 
		int currentSize;
		int currentSpeed;

		vector <Particle> p;
		vector <glm::vec3> attractPoints;
		vector <glm::vec3> attractPointsWithMovement;
		
};