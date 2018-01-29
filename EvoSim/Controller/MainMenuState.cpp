//
//  MainMenuState.cpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/MainMenuState.hpp"
#include <cmath>

MainMenuState::MainMenuState(StateManager* stateManager){
	this->stateManager = stateManager;
	this->mainFont.loadFromFile("Assets/Fonts/Gasalt-Thin.ttf");
}

MainMenuState::~MainMenuState(){
    
}

void MainMenuState::processState(sf::Event &event, sf::RenderTarget &renderWindow){
    if(event.type == sf::Event::MouseButtonPressed){
        
    }else if(event.type == sf::Event::Resized){
    	renderWindow.setView(sf::View(sf::FloatRect(0.f,0.f,event.size.width,event.size.height)));

    }
}
void MainMenuState::updateState(sf::RenderTarget &renderWindow){
    
}
void MainMenuState::renderState(sf::RenderTarget &renderWindow){
    

	sf::Text mainTitle;
	mainTitle.setString("Bonini's Paradox");
	mainTitle.setCharacterSize(64);
	mainTitle.setFont(mainFont);
	mainTitle.setPosition(std::round(renderWindow.getSize().x/2),100);


	sf::FloatRect textRect = mainTitle.getLocalBounds();
	mainTitle.setOrigin(std::round(textRect.left + textRect.width/2.0f),
	               std::round(textRect.top  + textRect.height/2.0f));

	renderWindow.draw(mainTitle);
    
}
