#pragma once
#include <unordered_map>
#include <vector>
class State{
    private:
        std::unordered_map<char, State> nextStates;
        
};