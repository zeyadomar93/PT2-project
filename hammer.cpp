#include <iostream>
#include <graphics.h>
#include <string>
using namespace std;

#include "hammer.hpp"
#include "image.hpp"

// dummy data for mole positions
// should be array later
int x, y;
bool isMoleUp = false;

Hammer::Hammer(bool _isHit, int _width, int _height, int _left, int _top, int _speed):
        isHit(_isHit),  
        width(_width), height(_height),
        left(_left), top(_top), 
        speed(_speed),
        image(_width, _height){}

void Hammer::initState(){
    image.read("images/hammer.jpg", "images/hammer_mask.jpg");
    image.draw(left, top);
    // delay(2000);
    // image.undraw(left, top);
}

void Hammer::mouseInput(Point &cp){
    cursorPosition = cp;
}

// make hammer follow cursor
void Hammer::displayHammer(){
    image.draw(cursorPosition.getX(), cursorPosition.getY());
    // display.draw(photo.c_str(), 0, 0, cursorPosition.getX(), cursorPosition.getY());
    // circle(cursorPosition.getX(), cursorPosition.getY(), 50);
}

// check if hammer hits a mole or not
// see if coordinates are the same as the moles
// and see if the moles are visible or not
bool Hammer::smash(){
    // if(GetAsyncKeyState(VK_LBUTTON)){

    //     getmouseclick(WM_LBUTTONDOWN, x, y)

    //     if(isMoleUp == true)
    //         return isHit = true;
    //     else
    //         return isHit = false;
    // }

    return isHit = false;
}

void Hammer::setLeft(int value) { left = value; }
void Hammer::setTop(int value) { top = value; }
void Hammer::setSpeed(int value) { speed = value; }

int Hammer::getHeight() const { return height; }
int Hammer::getLeft() const { return left; }
int Hammer::getTop() const { return top; }
int Hammer::getSpeed() const{ return speed; }