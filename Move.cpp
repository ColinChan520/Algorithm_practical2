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

        int Move::compare(Move*a, Move*b){
            if(a->getName() == b->getName()){
                
                return 2; 
            }
            else if(a->getName() == "Paper" && b->getName() == "Rock"){
                return 1;
            }
            else if(a->getName() == "Rock" && b->getName() == "Paper"){
                return 0;
            }
            else if(a->getName() == "Paper" && b->getName() == "Scissors"){
                return 0;
            }
            else if(a->getName() == "Scissors" && b->getName() == "Paper"){
                return 1;
            }
            else if(a->getName() == "Rock" && b->getName() == "Scissors"){
                return 1;
            }
            else if(a->getName() == "Scissors" && b->getName() == "Rock"){
                return 0;
            }

            else if(a->getName() == "Monkey" && (b->getName() == "Ninja" || b->getName() == "Robot")){
                return 1;
            }
            else if(a->getName() == "Robot" && (b->getName() == "Ninja" || b->getName() == "Zombie")){
                return 1;
            }
            else if(a->getName() == "Pirate" && (b->getName() == "Robot" || b->getName() == "Monkey")){
                return 1;
            }
            else if(a->getName() == "Ninja" && (b->getName() == "Pirate" || b->getName() == "Zombie")){
                return 1;
            }
            else if(a->getName() == "Zombie" && (b->getName() == "Pirate" || b->getName() == "Monley")){
                return 1;
            }
            else{
                return 2;
            }
        }

