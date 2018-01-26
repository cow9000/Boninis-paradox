

#ifndef State_hpp
#define State_hpp

#include <SFML/Graphics.hpp>

class State{
public:
    virtual ~State() {};
    virtual void processState(sf::Event &event) = 0;
    virtual void updateState() {};
    virtual void renderState(sf::RenderTarget &renderWindow) {};
};

#endif //State_hpp 
