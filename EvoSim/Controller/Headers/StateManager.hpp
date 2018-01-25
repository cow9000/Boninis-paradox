

#ifndef StateManager_hpp
#define StateManager_hpp

#include "State.hpp"
#include <stack>

class StateManager{
public:

private:
	std::stack<State> states;
};


#endif //STATEMANAGER_HPP