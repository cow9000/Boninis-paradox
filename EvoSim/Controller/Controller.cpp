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
}

sf::RenderWindow& Controller::returnWindow(){
    return window;
}
