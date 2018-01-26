

#ifndef StateManager_hpp
#define StateManager_hpp

#include "State.hpp"
#include <stack>

struct AllowedStates{
    enum States {MAINMENU,OPTIONS,PLAY,PAUSE};
};

class StateManager{
public:
    StateManager();
    ~StateManager();
    
    State& returnMainMenuState();
    State& returnOptionsMenuState();
    State& returnPlayState();
    State& returnPauseState();
    
    State& returnCurrentState();
    
    void setCurrentState(AllowedStates::States changeToState);
    
private:
    State* mainMenuState;
    State* optionsMenuState;
    State* playState;
    State* pauseState;
    
    State* currentState;
};


#endif //STATEMANAGER_HPP
