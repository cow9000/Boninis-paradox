

#ifndef StateManager_hpp
#define StateManager_hpp

#include "State.hpp"
#include <stack>

class StateManager{
public:
    StateManager();
    
    State& returnMainMenuState();
    State& returnOptionsMenuState();
    State& returnPlayState();
    State& returnPauseState();
    
private:
    State mainMenuSate;
    State optionsMenuState;
    State playState;
    State pauseState;
};


#endif //STATEMANAGER_HPP
