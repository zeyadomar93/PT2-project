#ifndef TIMER_H
#define TIMER_H

#include "life.hpp"

class Timer{
    private:
        int min;
        int sec;
        int timerColor;

        Life *lives;

    public:
        Timer(int _min = 0, int _sec = 0, int timerColor = 0);
        void initState(int _min, int _sec);
        void displayTimer(int timerColor);
        void update();
        void stop() const;
        Timer reset();
};

#endif