//
//  PlayState.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef PlayState_hpp
#define PlayState_hpp

#include "State.hpp"

class PlayState : public State {
public:
    void processState(sf::Event &event);
    void updateState();
    void renderState(sf::RenderTarget &renderWindow);
};

#endif /* PlayState_hpp */
