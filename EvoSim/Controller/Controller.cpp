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
    while(window.isOpen()){
        processWindow();
        updateWindow();
        drawWindow();
    }
}

void Controller::processWindow(){
    
    //Process the events of the main window and the game states.
    sf::Event event;
    while(window.pollEvent(event)){
        
        //Default for all game states, if the window is closed, close the window
        switch(event.type){
            case sf::Event::Closed:
                window.close();
                break;
        }
        
        
        
    }
}

void Controller::updateWindow(){
    //Put updating for game states in here
}

void Controller::drawWindow(){
    window.clear();
    
    //Put window drawing here
    
    window.display();
}

sf::RenderWindow& Controller::returnWindow(){
    return window;
}
