#ifndef MOLE_H
#define MOLE_H

using namespace std;

#include "characters.hpp"

class Mole : public Characters
{
private:
    int radius;
    int posX;
    int posY;
    bool isHit;
    bool isVisible;

public:
    Mole();
    ~Mole();
bool getIsVisible() const;
        void setIsVisible(bool value);
    void initState();
    void updatePosition();
    void hide();
    void show();
    void isMouseClicked(int x, int y);
    bool checkHit(int mouseX, int mouseY);

    bool getIsHit() const;
    int getRadius() const;
    int getSpeed() const;

    void setRadius(int value);
    void setSpeed(int value);
};

#endif
