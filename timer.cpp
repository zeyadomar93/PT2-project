#include <iostream>
#include <string>
#include <graphics.h>
using namespace std;

#include "timer.hpp"

// sample variable
bool gameStart = false;

Timer::Timer(int _min, int _sec, int _timerColor):
    min(_min), sec(_sec), timerColor(_timerColor), lives(nullptr){}

void Timer::initState(int _min, int _sec){
    min = _min;
    sec = _sec;
    // elapsedTime
    // sec = _sec * Time.deltaTime;

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

    string smin = to_string(min);
    string ssec = to_string(sec);

    setcolor(timerColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    // outtextxy(200, 100, smin.c_str());

    setcolor(timerColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    // outtextxy(200, 100, sec);
}

void Timer::update(){
    if(sec < 45)
        displayTimer(RED);
    else if(min == 1 && sec >= 45)
        displayTimer(YELLOW);
    else
        displayTimer(GREEN);
}

// TODO: stop timer and go to gameover
void Timer::stop() const{
    if(lives->display_life() == 0){
        // Time.timeScale = 0;

        delay(1000);
        // call game over layout
    }
}

// TODO: remove if unnecessary
Timer Timer::reset(){
    Timer time;
    time.min = 1;
    time.sec = 30;

    return time;
}
