#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include "life.hpp"
#include "score.hpp"
#include "timer.hpp"

class Scoreboard{
    private:
        Display display;

        Life life = 3;
        Score score;
        Timer timer;

    public:
        Scoreboard();
        void initState(int min, int sec, int screenWidth, int screenHeight);
        void update();
};

#endif