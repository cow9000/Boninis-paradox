//
//  Controller.cpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/24/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/Controller.hpp"

Controller::Controller(){
    window.create(sf::VideoMode(640,480), "Evolution Simulator");
    
    //Start the game
    start();
}

void Controller::start(){
    
    sf::Clock fpsClock;
    const sf::Time timePerFrame = sf::seconds(1.f/60.f);
    sf::Time elapsedTime = sf::Time::Zero;
    
    while(window.isOpen()){
        processWindow();
        
        
        sf::Time timeSinceLastUpdate = fpsClock.restart();
        timeSinceLastUpdate += elapsedTime;
        
        while(timeSinceLastUpdate > timePerFrame){
            //Limit FPS here to 60 FPS
            timeSinceLastUpdate -= timePerFrame;
            updateWindow(timePerFrame);
            
        }
        drawWindow();
    }
}

void Controller::processWindow(){
    
    //Process the events of the main window and the game states.
    sf::Event event;
    while(window.pollEvent(event)){
        
        //Default for all game states, if the window is closed, close the window
        if(event.type == sf::Event::Closed){
                window.close();
        }else{
            stateManager.returnCurrentState().processState(event);
        }
        
    }
}

void Controller::updateWindow(sf::Time timePerFrame){
    //Put updating for game states in here
    stateManager.returnCurrentState().updateState();
}

void Controller::drawWindow(){
    window.clear();
    
    //Draw the current state
    stateManager.returnCurrentState().renderState(window);
    
    window.display();
}

sf::RenderWindow& Controller::returnWindow(){
    return window;
}
