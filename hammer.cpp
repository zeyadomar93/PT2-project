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

// set hammer sit on the right bottom side of window
void Hammer::initState(){

}

void Hammer::mouseInput(Point &cp){
    cursorPosition = cp;
}

// make hammer follow cursor
void Hammer::displayHammer(){
    readimagefile(photo.c_str(), 0, 0, 1380, 750);
    circle(cursorPosition.getX(), cursorPosition.getY(), 50);
}

// check if hammer hits a mole or not
// see if coordinates are the same as the moles
// and see if the moles are visible or not
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