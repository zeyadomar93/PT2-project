#include <iostream>
#include <string>
#include <graphics.h>
using namespace std;

#include "timer.hpp"

// sample variable
bool gameStart = false;

Timer::Timer(int _min, int _sec):min(_min), sec(_sec){}

void Timer::initState(int _min, int _sec){
    min = _min;
    sec = _sec;

    while(gameStart == true){
        delay(1000);

        if(min == 0 && sec == 0)
            break;

        if(sec == 0){
            sec = 60;
            min--;
        }

        sec--;
    }
}

void Timer::displayTimer(int timerColor){
    setcolor(timerColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    outtextxy(200, 100, min);

    setcolor(timerColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    outtextxy(200, 100, sec);
}

void Timer::update(){
    if(sec < 45)
        displayTimer(RED);
    else if(min == 1 && sec >= 45)
        displayTimer(YELLOW);
    else
        displayTimer(GREEN);
}

void Timer::stop() const{
    if(lives == 0){
        Time.timeScale = 0;

        delay(1000);
        // call game over layout
    }
}

Timer Timer::reset(){
    Timer time;
    time.min = 1;
    time.sec = 30;

    return time;
}
