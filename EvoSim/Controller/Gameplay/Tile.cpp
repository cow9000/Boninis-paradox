//
//  Tile.cpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "../Headers/Gameplay/Tile.hpp"

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
    
    
}

void Tile::assignPosition(){
    
    
}

void Tile::assignSize(){
    
    
}

void Tile::assignTileProperties(){
    
    
}
