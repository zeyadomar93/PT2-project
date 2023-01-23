#ifndef HAMMER_H
#define HAMMER_H

#include "display.hpp"

class Hammer{
    private: 
        bool isHit;
        int width, height, left, top, speed;

        Display display;

    public:
        Hammer(bool _isHit = false, 
               int _width = 100, int _height = 100,
               int _left = 0, int _top = 0,
               int _speed = 1);

        void initState();
        void mouseInput(POINT &cp);
        bool smash();

        void setLeft(int value);
        void setTop(int value);
        void setSpeed(int value);

        int getHeight() const;
        int getLeft() const;
        int getTop() const;
        int getSpeed() const;
};

#endif