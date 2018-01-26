//
//  PauseState.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef PauseState_hpp
#define PauseState_hpp

#include "State.hpp"

class PauseState : public State {
public:
    void processState(sf::Event &event);
    void updateState();
    void renderState(sf::RenderTarget &renderWindow);
};

#endif /* PauseState_hpp */
