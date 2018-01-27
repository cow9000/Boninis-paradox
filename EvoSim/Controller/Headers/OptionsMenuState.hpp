//
//  OptionsMenuState.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef OptionsMenuState_hpp
#define OptionsMenuState_hpp

#include "State.hpp"

class OptionsMenuState : public State {
public:
	OptionsMenuState(StateManager* stateManager);
    ~OptionsMenuState();
    void processState(sf::Event &event);
    void updateState();
    void renderState(sf::RenderTarget &renderWindow);
};
#endif /* OptionsMenuState_hpp */
