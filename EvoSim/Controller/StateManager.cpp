#include "Headers/StateManager.hpp"
#include "Headers/MainMenuState.hpp"
#include "Headers/OptionsMenuState.hpp"
#include "Headers/PlayState.hpp"
#include "Headers/PauseState.hpp"

StateManager::StateManager(){
    this->mainMenuState = new MainMenuState();
    this->optionsMenuState = new OptionsMenuState();
    this->playState = new PlayState();
    this->pauseState = new PauseState();
    
    this->currentState = mainMenuState;
}

StateManager::~StateManager(){
    delete mainMenuState;
    delete optionsMenuState;
    delete playState;
    delete pauseState;
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

void StateManager::setCurrentState(States::implementedStates changeToState){
    if(changeToState == States::implementedStates::MAINMENU){
        currentState = mainMenuState;
    }else if(changeToState == States::implementedStates::OPTIONS){
        currentState = optionsMenuState;
    }else if(changeToState == States::implementedStates::PLAY){
        currentState = playState;
    }else if(changeToState == States::implementedStates::PAUSE){
        currentState = pauseState;
    }
}
