//
//  Biome.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/29/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Biome_h
#define Biome_h

#include "GameManager.hpp"
#include "Tile.hpp"
#include <vector>

class Biome{
public:
    
    
    
    double returnPrecipitation(){ return precipitation; }
    double returnAverageTemperature(){ return averageTemperature; }
    
    GameManager::BiomeType returnBiomeType(){ return biomeType; }
    
    std::vector<*Tile>& returnTilesInBiome(){ return tilesInBiome; }
    
    
    
private:
    
    void generateTilesInBiome();
    
    double precipitation;
    double averageTemperature;
    
    GameManager::BiomeType biomeType;
    
    //Tiles in biome
    std::vector<*Tile> tilesInBiome;
};

#endif /* Biome_h */
