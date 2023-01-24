#ifndef HAMMER_H
#define HAMMER_H

#include "display.hpp"
#include "characters.hpp"

class Hammer : public Characters{
    private: 
        int width, height, left, top, speed;

        Display display;

    public:
        Hammer(int _width = 100, int _height = 100,
               int _left = 0, int _top = 0,
               int _speed = 1);
        ~Hammer();

        void initState();
        void mouseInput(POINT &cp);
        void isMouseClicked(int x, int y);

        int getHeight() const;
        int getLeft() const;
        int getTop() const;
        int getSpeed() const;
        // int getNum() const;

        void setLeft(int value);
        void setTop(int value);
        void setSpeed(int value);
};

#endif