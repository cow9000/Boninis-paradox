//
//  MainMenuState.hpp
//  EvoSim
//
//  Created by Vawdrey, Derek on 1/26/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef MainMenuState_hpp
#define MainMenuState_hpp

#include "State.hpp"

class MainMenuState : public State {
public:
	MainMenuState(StateManager* stateManager);
    ~MainMenuState();
    void processState(sf::Event &event);
    void updateState();
    void renderState(sf::RenderTarget &renderWindow);
};

#endif /* MainMenuState_hpp */
