#include "Human.h"
        
        Human::Human(){

        }

        Human::Human(std::string playerName) : nameOfHuman(playerName) {}
        // Human::Human(std::string playerName){
        //     Human::nameOfHuman = playerName;
        // }

        Move * Human::makeMove(){
            std::cout << "Enter move:" << std::endl;
            Move* move = new Move();
            std::string input;
            std::cin >> input;
            move->setName(input);
            return move;
        }

        std::string Human::getName(){
            return Human::nameOfHuman;
        }

        
