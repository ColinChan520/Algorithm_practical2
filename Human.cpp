#include "Human.h"
        
        Move * Human::makeMove(){
            std::cout << "Enter move:" << std::endl;
            Move* move;
            std::string input;
            std::cin >> input;
            move->setName(input);
            return move;
        }
        
        std::string Human::setName(std::string name){
            Human::nameOfHuman = name;
            return name;
        }

        std::string Human::getName(){
            return Human::nameOfHuman;
        }
