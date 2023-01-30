#include <iostream>
#include <string>

using namespace std;

#include "life.hpp"
#include "display.hpp"

Life::Life(int initial_life)
{
    life = initial_life;
}

void Life::decrease_life()
{
    life -= initial_life;
}

int Life::display_life(int left)
{
    display.setSize(25, 25);
    display.readMask("images/ui/heart.jpg", "images/mask/heart_mask.jpg");
    display.drawMask(left, 35);
}

// method to display the current value of the life attribute
int Life::getLife(){ return life; }