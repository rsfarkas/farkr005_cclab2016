//
//  particle.h
//  particleSystem
//
//  Created by Roxanne Farkas on 11/1/16.
//
//

#pragma once
#include "ofMain.h"

class Particle {
public:
    
    Particle(ofVec2f pos);
    
    void update(float multiplier);
    void draw();
    void applyForce(ofVec2f force);
    void resetForces();
    
    ofVec2f mPosition, mSpeed, mDirection;
    float mLifeSpan;
};
