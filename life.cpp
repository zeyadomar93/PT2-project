#include <iostream>
#include <string>

using namespace std;

#include "life.hpp"

Life::Life(int initial_life)
{
    life = initial_life;
}

void Life::decrease_life()
{
    life -= initial_life;
}

// method to display the current value of the life attribute
int Life::display_life()
{
    return life;
}