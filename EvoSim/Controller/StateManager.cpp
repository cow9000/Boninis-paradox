#include "Headers/StateManager.hpp"

StateManager::StateManager(){
    this->currentState = mainMenuState;
}


State& StateManager::returnMainMenuState(){
    return *mainMenuState;
}


State& StateManager::returnOptionsMenuState(){
    return *optionsMenuState;
}


State& StateManager::returnPlayState(){
    return *playState;
}


State& StateManager::returnPauseState(){
    return *pauseState;
}

State& StateManager::returnCurrentState(){
    return *currentState;
}
