#include <iostream>
#include <string>
#include <graphics.h>
#include <windows.h>

using namespace std;

#include "hammer.hpp"
#include "display.hpp"

Hammer::Hammer(bool _isHit, int _width, int _height, int _left, int _top, int _speed):
    isHit(_isHit),  
    width(_width), height(_height),
    left(_left), top(_top), 
    speed(_speed),
    display(_left, _top, _width, _height){}

void Hammer::initState(){
    display.readMask("images/hammer.jpg", "images/mask/hammer_mask.jpg");
    display.drawMask(left, top);
    delay(100);
    display.undrawMask(left, top);
}

// TODO: set mouse cursor to invisible
void Hammer::mouseInput(POINT &cp){
    GetCursorPos(&cp);
    display.drawMask(cp.x - 35, cp.y - 65);
    delay(100);
    display.undrawMask(cp.x - 35, cp.y - 65);
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