//
//  PlayState.cpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/SplashState.hpp"
#include "Headers/StateManager.hpp"
#include <iostream>

SplashState::SplashState(StateManager* stateManager){
	this->stateManager = stateManager;
}

SplashState::~SplashState(){
    
}

void SplashState::processState(sf::Event &event){
    if(event.type == sf::Event::MouseButtonPressed){
    }
}

void SplashState::updateState(){
    //If timePassed is creater than 255 + 60
	if(timePassed >= 255){
		stateManager->setCurrentState(States::implementedStates::MAINMENU);
	}
}

void SplashState::renderState(sf::RenderTarget &renderWindow){
	if(splashClock.getElapsedTime().asSeconds() > 1){
		sf::RectangleShape splashColor;
		splashColor.setSize(sf::Vector2f(renderWindow.getSize().x, renderWindow.getSize().y));

		if(timePassed < 60){
			timePassed = splashClock.getElapsedTime().asMilliseconds()/4;
		}else{
			timePassed = splashClock.getElapsedTime().asSeconds() * 100;
		}

		sf::Color splashFade(255,255,255,timePassed);


		if(timePassed >= 255){
			splashFade.a = 255;
		}

		splashColor.setFillColor(splashFade);
		splashColor.setPosition(0,0);
		renderWindow.draw(splashColor);
	}
    
}
