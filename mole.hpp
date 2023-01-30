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
    
    void initState();
    void updatePosition();
    void hide();
    void show();
    void isMouseClicked(int x, int y);
    bool checkIsHit(int mouseX, int mouseY);

    bool getIsVisible() const;
    bool getIsHit() const;
    int getRadius() const;

    void setIsVisible(bool value);
    void setRadius(int value);
};

#endif
