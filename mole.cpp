#include <iostream>
#include <string>
#include <random>
#include <cmath>

using namespace std;

#include "mole.hpp"
#include "characters.hpp"

Mole::Mole(int _width, int _height, int _left, int _top) : 
    Characters(_width, _height, _left, _top),
    display(_left, _top, _width, _height){
    storeLeft[5] = {_left};
    storeTop[5] = {_top};
    isHit = false;
}

Mole::~Mole(){ cout << "Destroy Mole" << endl; }

void Mole::initState()
{
    // // Set the mole's starting position and visibility
    // left = rand() % 600;
    // top = rand() % 400;
    // isVisible = false;
}

void Mole::putObject(){
    display.readMask("images/m_mouse.jpg", "images/mask/m_mouse_mask.jpg");
    display.drawMask(left, top);
}

void Mole::modifySpeed(int value)
{
    // for(int i=1)
    // int speed[7] =

    // for(int i=0; i<5; i++)
    //     speed[i] = value;

    // left = rand() % 600;
    // top = rand() % 400;

    display.undrawMask(left, top);
    // for (int sleep=0; sleep<speed[sleep]*1000; sleep++);
    display.drawMask(left, top);

    cout << "undraw";

}

bool Mole::isMouseClicked(int mouseX, int mouseY){
    // Check if the mouse click is within the bounds of the mole
    int xMin = left;
    int xMax = left + width;
    int yMin = top;
    int yMax = top + height;

    if(((mouseX >= xMin) && (mouseX <= xMax)) && ((mouseY >= yMin) && (mouseY <= yMax))){
        return true;
    }
    else{
        return false;
    }
}

void Mole::stop(){
    display.undrawMask(left, top);
    // display.freeMask();
}

bool Mole::getIsHit() const
{
    return isHit;
}


