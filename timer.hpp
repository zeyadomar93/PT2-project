#ifndef TIMER_H
#define TIMER_H

#include "life.hpp"

class Timer{
    private:
        int min;
        int sec;
        double elapsedTime;
        int timerColor;

        Life lives;

    public:
        Timer(int _min = 0, int _sec = 0, double elapsedTime = 0.0, int timerColor = 0);
        void initState(int _min, int _sec);
        void displayTimer(int timerColor);
        bool update();
        void changeColour();
};

#endif