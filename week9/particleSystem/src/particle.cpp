//
//  particle.cpp
//  particleSystem
//
//  Created by Roxanne Farkas on 11/1/16.
//
//

#include "particle.h"

//initializing constructor, and inisitializing the variables inside of it
Particle::Particle(ofVec2f position) : mPosition(position), mSpeed(ofRandom(-2.f, 2.f), ofRandom(-2.f, 2.f)), mDirection(ofVec2f(0)), mLifeSpan(255.f) {};

//update function
void Particle::update(float multiplier){
    //apply acceleration to velocity
    mSpeed += mDirection;
    mPosition += mSpeed * multiplier;
    
    //decrease lifespan as they move
    if (mLifeSpan > 0){
        mLifeSpan-= 2.f;
    }
    
  }
//draw function
void Particle::draw(){
    if (mLifeSpan < 210 && mLifeSpan >= 190){
        //make it brighter
       ofSetColor(255,182,193);
    } else if(mLifeSpan < 190 && mLifeSpan >= 170){
        ofSetColor(0,0,255);
    }else if(mLifeSpan < 170 && mLifeSpan >= 160){
       ofSetColor(255, 20, 147);
    }
    
    
    //if particle is closer it is smaller
    ofDrawCircle(mPosition, 2.f * ofMap(mLifeSpan, 0, 255.f,0,1.f));
}

//apply force function
void Particle::applyForce(ofVec2f force){
    mDirection += force;
}

//reset forces
void Particle::resetForces(){
    mDirection +=0;
    
};
