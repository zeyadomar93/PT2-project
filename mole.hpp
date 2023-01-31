#ifndef MOLE_H
#define MOLE_H

using namespace std;

#include "characters.hpp"
#include "display.hpp"

class Mole : public Characters
{
private:
    int radius;
    bool isHit;
    bool isVisible;

    Display display;

public:
    Mole(int _width, int _height, int _left, int _top);
    ~Mole();
    
    void initState();
    void putObject();
    void modifySpeed(int value);
    bool isMouseClicked(int mouseX, int mouseY);
    void stop();

    bool getIsVisible() const;
    bool getIsHit() const;

    void setIsVisible(bool value);

};

#endif
