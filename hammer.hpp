#ifndef HAMMER_H
#define HAMMER_H

#include "point.hpp"
#include "image.hpp"

class Hammer{
    private: 
        bool isHit;
        int width, height, left, top, speed;

        Image image;

    public:
        Hammer(bool _isHit = false, 
               int _width = 100, int _height = 100,
               int _left = 0, int _top = 0,
               int _speed = 1);

        void initState();
        void mouseInput(POINT &cp);
        void displayHammer();
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