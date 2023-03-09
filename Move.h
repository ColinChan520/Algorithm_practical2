#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move{
    public:
    
    std::string setName(std::string name);
    std::string getName();
        int compare(Move*a, Move*b);
    private:
         std::string moveChoice;
};

#endif