

#ifndef State_hpp
#define State_hpp

#include <SFML/Graphics.hpp>

class State{
public:
    void processState(sf::Event &event) {};
    void updateState() {};
    void renderState(sf::RenderTarget &renderWindow) {};
};

#endif //State_hpp 
