#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <iostream>
#include <string>
#include <graphics.h>
#include <windows.h>

using namespace std;

// TODO: Revise on pointers and arrays
class Characters{
    protected:
        int width, height, left, top;

    public:
        Characters(int _width, int _height, int _left, int _top);
        virtual ~Characters();

        virtual void initState() = 0;
        virtual void isMouseClicked(int x, int y) = 0;
        virtual void putObject() = 0;

        virtual void setLeft(int value);
        virtual void setTop(int value);
};

#endif