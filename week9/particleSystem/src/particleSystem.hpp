//
//  particleSystem.hpp
//  particleSystem
//
//  Created by Roxanne Farkas on 11/1/16.
//
//

#pragma once
#include "ofMain.h"
#include "particle.h"

class ParticleSystem {
public:
    ParticleSystem(ofVec2f position);
    void update(ofVec2f force);
    void draw();
    
    vector<Particle> mParticleList;
    
    ofVec2f mPosition;
    int mEmitRate;
    bool mIsAddingParticles;
};
