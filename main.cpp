#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

int main(){

    Human *h;
    Computer *c;
    Referee r;
    r.refGame(h,c);
    return 0;

}