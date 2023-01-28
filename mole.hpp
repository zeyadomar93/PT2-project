#ifndef MOLE_H
#define MOLE_H

using namespace std;

#include "characters.hpp"

class Mole : public Characters{
    private:
        // int radius;
        bool isHit;
    public:
        Mole();
        ~Mole();

        void initState();
        void updatePosition();
        void hide();
        void show();
        void isMouseClicked(int x, int y);

        bool getIsHit() const;
        int getSpeed() const;

        void setSpeed(int value);
};

#endif

