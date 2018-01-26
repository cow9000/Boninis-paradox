

#ifndef State_hpp
#define State_hpp

#include <SFML/Graphics.hpp>

class State{
public:
    virtual ~State() = 0;
    virtual void processState(sf::Event &event) = 0;
    virtual void updateState() {};
    virtual void renderState(sf::RenderTarget &renderWindow) {};
};

State::~State(){
    
}

#endif //State_hpp 
