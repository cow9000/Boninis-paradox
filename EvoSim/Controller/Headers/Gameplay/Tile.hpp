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
    sf::Color returnMaxColorValues() { return maxColorValues; }
    sf::Color returnMinColorValues() { return minColorValues; }
    sf::Color returnCurrentColorValues() { return currentColorValues;}
    
    //Drawing return variables
    sf::Vector2f returnSize(){ return size; }
    sf::Vector2f returnPosition(){ return position; }
    
    bool returnCanLive(){ return canLive; }
    bool returnLiving(){ return living; }
    bool returnNeedsPartner() { return needsPartner;  }
    bool returnFlammable() { return flammable; }
    
    double returnGrowthRare(){ return growthRate; }
    double returnReproductionRate(){ return reproductionRate; }
    double returnWaterConsumption(){ return waterConsumption; }
    double returnErosionResistance(){ return erosionResistance; }
    
    
private:
    
    //Methods needed for tile creation
    virtual void init() = 0;
    virtual void assignColors() = 0;
    virtual void assignPosition() = 0;
    virtual void assignSize() = 0;
    virtual void assignTileProperties() = 0;
    
    
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
    bool flammable;
    
    //Living rates and data needed
    double growthRate;
    double reproductionRate;
    double waterConsumption;
    double erosionResistance;
    
    
    
};

#endif /* Tile_hpp */
