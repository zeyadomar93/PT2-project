#include <iostream>

using namespace std;

#include "characters.hpp"

Characters::Characters(int _speed) : speed(_speed){}
Characters::~Characters(){ cout << "Delete characters" << endl; }

int Characters::getSpeed() const { return speed; }
void Characters::setSpeed(int value){ speed = value; }

