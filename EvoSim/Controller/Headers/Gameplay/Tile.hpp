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
    
    sf::Color returnMaxColorValues() { return maxColorValues; }
    sf::Color returnMinColorValues() { return minColorValues; }
    sf::Color returnCurrentColorValues() { return currentColorValues;}
    
    //Drawing return variables
    sf::Vector2f returnSize(){ return size; }
    sf::Vector2f returnPosition(){ return position; }
    
    bool returnCanLive(){ return canLive; }
    bool returnLiving(){ return living; }
    bool returnNeedsPartner() { return needsPartner;  }
    
    
private:
    //Colors will represent how "alive the ground is, if indeed that tile is alive"
    sf::Color maxColorValues;
    sf::Color minColorValues;
    sf::Color currentColorValues;
    
    sf::Vector2f position;
    sf::Vector2f size;

    //Is this a rock, or a living plant things
    bool canLive;
    //If it is living, we assume it will grow.
    bool living;
    //Does it need a partner for reproduction
    bool needsPartner;
    
    //Living rates and data needed
    double growthRate;
    double reproductionRate;
    double waterConsumption;
    
    
    
};

#endif /* Tile_hpp */
