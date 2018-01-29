//
//  Tile.cpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "../Headers/Gameplay/Tile.hpp"
#include <stdlib.h>
#include <time.h>

Tile::Tile(){
    init(GameManager::TileType::WATER, GameManager::BiomeType::FRESHWATER);
}

Tile::Tile(GameManager::TileType tileType){
    init(tileType, GameManager::BiomeType::ALPINE);
}

Tile::Tile(GameManager::TileType tileType, GameManager::BiomeType biomeType){
    init(tileType, biomeType);
}

void Tile::init(GameManager::TileType tileType, GameManager::BiomeType biomeType){
    
    this->tileType = tileType;
    this->biomeType = biomeType;
    
    assignColors();
    assignPosition();
    assignSize();
    assignTileProperties();
    
}

void Tile::assignColors(){
    
    std::srand (std::time(NULL));
    
    //Colors will represent how "alive the ground is, if indeed that tile is alive, or how rocky it is"
    maxColorValues = sf::Color(0,0,0);
    minColorValues = sf::Color(0,0,0);
    
    
    
    currentColorValues = sf::Color(rand() % maxColorValues.r + minColorValues.r,rand() % maxColorValues.g + minColorValues.g,rand() % maxColorValues.b + minColorValues.b);
    
    
    
}

void Tile::assignPosition(){
    
    position = sf::Vector2f(2,2);
    
}

void Tile::assignSize(){
    
    size = sf::Vector2f(1,1);
    
}

void Tile::assignTileProperties(){
    
    if(tileType == GameManager::TileType::GRASS || tileType == GameManager::TileType::TREE){
        canLive = true;
    }else{
        canLive = false;
    }
    
    //If the tile can live, then it is living, if not
    if(canLive) living = true;
    else living = false;

    //If it is living it needs a partner (will implement Asexual reproduction later)
    if(living) needsPartner = true;
    else needsPartner = false;
    
    //If the object can live (is made of wood, grass, fur, etc, it is flammable.
    if(canLive) flammable = true;
    else flammable = false;
    
    //Living rates and data needed
    growthRate = 0.23;
    reproductionRate = 0.01;
    
    //If Tile is living it will consume water, if it isn't, it won't
    if(living) waterConsumption = 0.01;
    else waterConsumption = 0;
    
    //Natural consequences
    erosionResistance = 0.02;
    density = 0.68;
    
}
