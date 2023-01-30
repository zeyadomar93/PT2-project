#ifndef HAMMER_H
#define HAMMER_H

#include "display.hpp"
#include "characters.hpp"

class Hammer : public Characters{
    private: 
        Display display;
        POINT cp;
        
    public:
        Hammer(int _width = 100, int _height = 100,
               int _left = 0, int _top = 0);
        ~Hammer();

        void initState();
        void putObject();
        void isMouseClicked(int x, int y);
};

#endif