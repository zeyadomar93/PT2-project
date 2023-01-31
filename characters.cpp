#include <iostream>

using namespace std;

#include "characters.hpp"

Characters::Characters(int _width, int _height, int _left, int _top) : 
    width(_width), height(_height), 
    left(_left), top(_top){
        speed[5] = {};
    }

Characters::~Characters(){ cout << "Delete characters" << endl; }

void Characters::setLeft(int value){ left = value; }
void Characters::setTop(int value){ top = value; }

int Characters::getSpeed() const{ return speed[5]; }
