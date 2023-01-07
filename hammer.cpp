#include <iostream>
#include <graphics.h>
#include <string>
using namespace std;

#include "hammer.hpp"

// dummy data for mole positions
// should be array later
int x, y;
bool isMoleUp = false;

Hammer::Hammer(bool _isHit, int _speed):isHit(_isHit), speed(_speed){}

void Hammer::initState(){

}

void Hammer::mouseInput(Point &cp){
    cursorPosition = cp;
}

void Hammer::displayHammer(){
    circle(cursorPosition.getX(), cursorPosition.getY(), 50);
}

bool Hammer::smash(){
    // if(GetAsyncKeyState(VK_LBUTTON)){
    //     if(isHit == true){
    //         return 
    //     }
    // }

    // getmouseclick(WM_LBUTTONDOWN, x, y)

    // if(GetAsyncKeyState(VK_LBUTTON)){
    //     if(isMoleUp == true)
    //         return isHit = true;
    //     else
    //         return isHit = false;
    // }

    return isHit = false;

}

int Hammer::getSpeed() const{ return speed; }