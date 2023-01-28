#include <iostream>
#include <string>
#include <graphics.h>
#include <windows.h>

using namespace std;

#include "hammer.hpp"
#include "display.hpp"

Hammer::Hammer(int _width, int _height, int _left, int _top, int _speed):
    width(_width), height(_height),
    left(_left), top(_top), 
    speed(_speed),
    display(_left, _top, _width, _height){}

Hammer::~Hammer(){ cout << "Destroy Hammer" << endl; }

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

// TODO: Rotate hammer
void Hammer::isMouseClicked(int x, int y){
    
}

void Hammer::setLeft(int value) { left = value; }
void Hammer::setTop(int value) { top = value; }
void Hammer::setSpeed(int value) { speed = value; }

int Hammer::getHeight() const { return height; }
int Hammer::getLeft() const { return left; }
int Hammer::getTop() const { return top; }
int Hammer::getSpeed() const{ return speed; }