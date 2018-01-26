//
//  Tile.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Tile_hpp
#define Tile_hpp

#include <SFML/Graphics.hpp>

class Tile{
public:
    
    virtual void init() = 0;
    
    sf::Color returnMaxColorValues() {
        return maxColorValues;
    }
    sf::Color returnMinColorValues() {
        return minColorValues;
    }
    
    sf::Color returnCurrentColorValues() {
        return currentColorValues;
    }
    
    sf::Vector2f returnSize(){
        return size;
    }
    
    sf::Vector2f returnPosition(){
        return position;
    }
    
    
private:
    sf::Color maxColorValues;
    sf::Color minColorValues;
    sf::Color currentColorValues;
    
    sf::Vector2f position;
    sf::Vector2f size;
    
    
};

#endif /* Tile_hpp */
