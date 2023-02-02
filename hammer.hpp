#ifndef HAMMER_H
#define HAMMER_H

#include "display.hpp"
#include "characters.hpp"

class Hammer : public Characters{     
    public:
        Hammer(int _width = 100, int _height = 100,
               int _left = 0, int _top = 0);
        ~Hammer();

        void initState();
        void putObject();
        void modifySpeed(int value);
        bool isMouseClicked(int x, int y);
        void stop();
};

#endif