#include "ofMain.h"
#include "ofApp.h"
#include <iostream>
using namespace std;

void greet(string person) {
    cout << "Hi there" << person << "." << endl;
}


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());
    
    cout << "Hello World" << endl;
    
    greet(" Jasmine");
    greet(" Meric");
    greet(" Justin");
    greet(" Wilson");
    greet(" computer");
    greet(" desk");
    return 0;

}
