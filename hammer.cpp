#include <iostream>
#include <string>
#include <graphics.h>
#include <windows.h>

using namespace std;

#include "hammer.hpp"
#include "display.hpp"
#include "characters.hpp"

Hammer::Hammer(int _width, int _height, int _left, int _top):
    Characters(_width, _height, _left, _top),
    display(_left, _top, _width, _height){}

Hammer::~Hammer(){ cout << "Destroy Hammer" << endl; }

void Hammer::initState(){
    display.readMask("images/hammer.jpg", "images/mask/hammer_mask.jpg");
    display.drawMask(left, top);
    delay(1000);
    display.undrawMask(left, top);
}

// TODO: set mouse cursor to invisible
void Hammer::putObject(){
    GetCursorPos(&cp);
    display.drawMask(cp.x - 35, cp.y - 65);
    delay(100);
    display.undrawMask(cp.x - 35, cp.y - 65);
}

// TODO: Rotate hammer
void Hammer::isMouseClicked(int x, int y){
    
}

void Hammer::stop(){
    display.drawMask(left, top);
}
