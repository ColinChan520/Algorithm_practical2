#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move{
    public:
    
    std::string setName(string name);
    std::string getName();
        bool compare(Move*a, Move*b);
    private:
         std::string moveChoice;
};

#endif