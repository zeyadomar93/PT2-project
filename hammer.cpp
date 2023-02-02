#include <iostream>
#include <string>
#include <graphics.h>

using namespace std;

#include "hammer.hpp"
#include "characters.hpp"

Hammer::Hammer(int _width, int _height, int _left, int _top):
    Characters(_width, _height, _left, _top){}

Hammer::~Hammer(){ cout << "Destroy Hammer" << endl; }

void Hammer::initState(){
    display.readMask("images/hammer.jpg", "images/mask/hammer_mask.jpg");
    display.drawMask(left, top);
    delay(1000);
    display.undrawMask(left, top);
}

// TODO: set mouse cursor to invisible
void Hammer::putObject(){
    display.drawMask(mousex() - 35, mousey() - 45);
    delay(100);
    display.undrawMask(mousex() - 35, mousey() - 45);
}

void Hammer::modifySpeed(int value){

}

// TODO: Rotate hammer
bool Hammer::isMouseClicked(int x, int y){
    return false;
}

void Hammer::stop(){
    display.drawMask(left, top);
}
