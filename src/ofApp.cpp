#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetLineWidth(4.5);
    
    ofBackground(0);
    ofSetColor(255);
    ofDrawLine(400,100,400,200);
    ofDrawTriangle(400,150, 450,20,600,200);
    
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        float randomColor = ofRandom(100, 255);
        ofSetColor(randomColor);
        
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 350, 150);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
