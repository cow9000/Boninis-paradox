//
//  PlayState.cpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/PlayState.hpp"

PlayState::PlayState(StateManager* stateManager){
	this->stateManager = stateManager;
}


PlayState::~PlayState(){
    
}

void PlayState::processState(sf::Event &event){
    if(event.type == sf::Event::MouseButtonPressed){
        
    }
}
void PlayState::updateState(){
    
}
void PlayState::renderState(sf::RenderTarget &renderWindow){
    
    
}
