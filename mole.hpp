#ifndef MOLE_H
#define MOLE_H

using namespace std;

#include "characters.hpp"
#include "display.hpp"

class Mole : public Characters
{
private:
    int speed;
    int radius;
    bool isHit;
    bool isVisible;

    Display display;

public:
    Mole(int _width, int _height, int _left, int _top, int _speed);
    ~Mole();
    
    void initState();
    void putObject();
    void updatePosition();
    void hide();
    void show();
    void isMouseClicked(int x, int y);
    bool checkIsHit(int mouseX, int mouseY);

    bool getIsVisible() const;
    bool getIsHit() const;
    int getSpeed() const;

    void setSpeed(int value);
    void setIsVisible(bool value);

};

#endif
