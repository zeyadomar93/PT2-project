#ifndef TIMER_H
#define TIMER_H

#include <string>
using namespace std;

// class Life;

class Timer{
    private:
        int min;
        int sec;

        int timerColor;
        // Life lives;

    public:
        Timer(int _min = 0, int _sec = 0);
        void initState(int _min, int _sec);
        int update(int _min, int _sec);
        void displayTimer(int timerColor);
        int stop() const;
        // int stop(Life _lives) const{}
        Timer reset();
};

#endif