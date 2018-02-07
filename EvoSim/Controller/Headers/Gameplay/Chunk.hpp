//
//  Chunk.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 2/7/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Chunk_hpp
#define Chunk_hpp

#include <SFML/Graphics.hpp>
#include "Tile.hpp"
#include <vector>

class Chunk{
    
public:
    Chunk(sf::Vector2f chunkPosition);
    ~Chunk();
    void updateChunk();
    
private:
    
    void fillChunk();
    
    sf::Vector2f chunkPosition;
    std::vector<Tile*> tiles;
    
};

#endif /* Chunk_hpp */
