// TODO
// create 6 mole objects
// do array of random visibility (moles popping up randomly not in order)
// do array moles position
// do array of random time interval (seconds between moles showing up)

#include <iostream>
#include <string>

using namespace std;

#include "mole.hpp"

Mole::Mole() : Characters(speed){}
Mole::~Mole(){ cout << "Destroy Mole" << endl; }

void Mole::initState(){

}

void Mole::updatePosition(){

}

void Mole::hide(){

}

void Mole::show(){

}

// TODO: Check mouse area
// Return score
void Mole::isMouseClicked(int x, int y){
    // if(GetAsyncKeyState(VK_LBUTTON)){

    //     getmouseclick(WM_LBUTTONDOWN, x, y)

    //     if(isMoleUp == true)
    //         isHit = true;
    //     else
    //         isHit = false;
    // }

}

bool Mole::getIsHit() const{
    return isHit;
}

int Mole::getSpeed() const{ return speed; }

void Mole::setSpeed(int value) { speed = value; }