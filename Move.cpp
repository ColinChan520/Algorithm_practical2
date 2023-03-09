#include "Move.h"
#include <string>
#include<iostream>

        std::string Move::setName(std::string name){
            Move::moveChoice = name;
            return name;
        }

        std::string Move::getName(){
            return Move::moveChoice;
        }

        bool Move::compare(Move*a, Move*b){
            if(a->getName() == b->getName()){
                std::cout << "****" << std::endl;
                std::cout << a->getName() << std::endl;
                std::cout << b->getName() << std::endl;
                std::cout << "****" << std::endl;
                return NULL; 
            }
            else if(a->getName() == "Paper" && b->getName() == "Rock"){
                return true;
            }
            else if(a->getName() == "Rock" && b->getName() == "Paper"){
                return false;
            }
            else if(a->getName() == "Paper" && b->getName() == "Scissors"){
                return false;
            }
            else if(a->getName() == "Scissors" && b->getName() == "Paper"){
                return true;
            }
            else if(a->getName() == "Rock" && b->getName() == "Scissors"){
                return true;
            }
            else if(a->getName() == "Scissors" && b->getName() == "Rock"){
                return false;
            }

            else if(a->getName() == "Monkey" && (b->getName() == "Ninja" || b->getName() == "Robot")){
                return true;
            }
            else if(a->getName() == "Robot" && (b->getName() == "Ninja" || b->getName() == "Zombie")){
                return true;
            }
            else if(a->getName() == "Pirate" && (b->getName() == "Robot" || b->getName() == "Monkey")){
                return true;
            }
            else if(a->getName() == "Ninja" && (b->getName() == "Pirate" || b->getName() == "Zombie")){
                return true;
            }
            else if(a->getName() == "Zombie" && (b->getName() == "Pirate" || b->getName() == "Monley")){
                return true;
            }
            else{
                return NULL;
            }
        }

