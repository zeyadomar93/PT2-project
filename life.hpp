#ifndef LIFE_H
#define LIFE_H

class Life
{
private:
    int life;
    int initial_life = 3;

public:
    Life(int initial_life);
    // int getLife() const;
    void decrease_life();
    int display_life();

};

#endif

// Life player_life(3);
// player_life.decrease_life();  // decrease the player's life by 1
// player_life.display_life();  // display the current life of the player
