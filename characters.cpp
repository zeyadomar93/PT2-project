#include <iostream>

using namespace std;

#include "characters.hpp"

Characters::Characters(int _speed){}
Characters::~Characters(){ cout << "Delete characters" << endl; }

void Characters::initState(){};
void Characters::isMouseClicked(int x, int y){};

// TODO: Revise whether need to set to 0 like .hpp
int Characters::getSpeed() const { return speed; }
void Characters::setSpeed(int value){ speed = value; }

