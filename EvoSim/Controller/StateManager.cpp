#include "Headers/StateManager.hpp"
#include "Headers/MainMenuState.hpp"

StateManager::StateManager(){
    this->mainMenuState = new MainMenuState();
    
    this->currentState = mainMenuState;
}

StateManager::~StateManager(){
    delete mainMenuState;
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
