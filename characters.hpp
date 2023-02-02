#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <iostream>
#include <string>
#include <graphics.h>
#include <windows.h>

using namespace std;

#include "display.hpp"

// TODO: Revise on pointers and arrays
class Characters{
    protected:
        int width, height, left, top;
        int speed[5] = {};

        Display display;

    public:
        Characters(int _width, int _height, int _left, int _top);
        virtual ~Characters();

        virtual void initState() = 0;
        virtual bool isMouseClicked(int x, int y) = 0;
        virtual void putObject() = 0;
        virtual void stop() = 0;

        virtual void setLeft(int value);
        virtual void setTop(int value);

        virtual int getSpeed() const;
        virtual void modifySpeed(int value) = 0;
};

#endif