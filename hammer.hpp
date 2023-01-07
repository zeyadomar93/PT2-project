#ifndef HAMMER_H
#define HAMMER_H

#include "point.hpp"

class Hammer{
    private: 
        bool isHit;
        int speed;
        Point cursorPosition;

    public:
        Hammer(bool _isHit = false, int _speed = 1);
        void initState();
        void mouseInput(Point &cp);
        void displayHammer();
        bool smash();
        int getSpeed() const;
};

#endif