//
//  Chunk.cpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 2/7/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "../Headers/Gameplay/Chunk.hpp"

Chunk::Chunk(sf::Vector2f chunkPosition){
    this->chunkPosition = chunkPosition;
}

Chunk::~Chunk(){
    for(int i = 0; i < tiles.size(); i++){
        delete tiles[i];
    }
}

void Chunk::updateChunk(){
    for(int i = 0; i < tiles.size(); i++){
        tiles[i]->updateTile(false, 0, 50);
    }
}

void Chunk::fillChunk(){
    for(int r = 0; r < GameManager::chunkSize.x; r++){
        for(int c = 0; c < GameManager::chunkSize.y; c++){
            tiles.push_back(new Tile(sf::Vector2f(r,c),GameManager::ROCK));
        }
    }
}
