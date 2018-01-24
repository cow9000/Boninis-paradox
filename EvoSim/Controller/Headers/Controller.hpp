//
//  Controller.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/24/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <SFML/Graphics.hpp>

class Controller{
    public:
        Controller();
        sf::RenderWindow& returnWindow();
    private:
    
        void start();
    
        //Process Events
        void processWindow();
        //Update
        void updateWindow(sf::Time timePerFrame);
        //Draw
        void drawWindow();
    
        sf::RenderWindow window;
};

#endif /* Controller_hpp */
