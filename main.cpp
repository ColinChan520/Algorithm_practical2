#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

int main(){

    Human *h = new Human();
    Human *f = new Human();
    Computer *c = new Computer();
    Referee *r =  new Referee();
    Player * winner = r->refGame(h,f);
    std::cout << winner->getName() << std::endl;
    return 0;

}