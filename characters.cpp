
#include "characters.hpp"

Characters::Characters(int _speed, int _num[]){}

int Characters::getSpeed() const { return speed; }
int Characters::getNum() const { return num[10]; }

void Characters::setSpeed(int value){
    speed = value;
}

// TODO: Use pointer?
// void Characters::setNum(int value[]){
//     num = value;
// }

