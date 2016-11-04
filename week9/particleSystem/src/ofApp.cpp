#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    mGravity = ofVec2f(0.f, 0.02);
    
    circleButton.set(ofGetWindowWidth()/2, ofGetWindowHeight()/1.2);
    radius = 50;
    bCircleButton = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i =0; i <mSystems.size(); i++){
        mSystems[i].update(mGravity);
    }
    
    if (bCircleButton){
        ofBackground(255, 255, 255);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i=0; i<mSystems.size(); i++){
        mSystems[i].draw();
    }
    
    if (bCircleButton)
        ofSetColor(ofColor::seaGreen);
    else
        ofSetColor(ofColor::seaGreen);
    
    ofDrawCircle(circleButton, radius);

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
    
    if(ofGetMouseX()> (ofGetWindowWidth()/2-25)
       && ofGetMouseX()<(ofGetWindowWidth()/2+25)
       && ofGetMouseY()<(ofGetWindowHeight()/1.2+25)
       && ofGetMouseY()>(ofGetWindowHeight()/1.2-25)
       ){
    
        ParticleSystem system(ofVec2f(ofRandom(ofGetWindowWidth()),ofRandom(ofGetWindowHeight())));
        mSystems.push_back(system);

    }

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
