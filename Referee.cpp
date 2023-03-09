#include <iostream>
#include "Referee.h"
#include "Move.h"

    Player* Referee::refGame(Player*player1, Player*player2){  
        
        Move* move = new Move();
        
        Move* player1move = player1->makeMove();
        Move* player2move = player2->makeMove();
        
        std::cout << "----" << std::endl;
          std::cout << player1->getName() << std::endl;  
          std::cout << player2->getName() << std::endl; 
          std::cout << "----" << std::endl;
        
        std::cout << "****" << std::endl;
                std::cout << player1move->getName() << std::endl;
                std::cout << player2move->getName() << std::endl;
                std::cout << "****" << std::endl;
        bool result = move->compare(player1move, player2move);

        if(result == NULL){
          return nullptr;  
        }
        else if(result == true){
            return player1;
        }
        else if(result == false){
            return player2;
        }
        else{
           return nullptr; 
        }

        delete move;
     }
              
