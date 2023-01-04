// #include "display.hpp"

class Life
{
private:
    int life;
    int initial_life = 3;

public:
    Life(int initial_life)
    {
        life = initial_life;
    }

    void decrease_life()
    {
        life -= initial_life;
    }

    // method to display the current value of the life attribute
    int display_life()
    {
        return life;
    }
};

// Life player_life(3);
// player_life.decrease_life();  // decrease the player's life by 1
// player_life.display_life();  // display the current life of the player
