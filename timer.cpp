#include <iostream>
#include <string>
#include <cstring>
#include <graphics.h>
using namespace std;

#include "timer.hpp"

Timer::Timer(int _min, int _sec, int _timerColor):
    min(_min), sec(_sec), timerColor(_timerColor), lives(3){}

void Timer::initState(int _min, int _sec){
    min = _min;
    sec = _sec + 1;
}

void Timer::displayTimer(int timerColor){
    char buffer[10];

    setcolor(timerColor);
    settextstyle(BOLD_FONT, HORIZ_DIR, 5);
    sprintf(buffer, "%d:%d", min, sec);

    if(sec < 10)
        sprintf(buffer, "%d:0%d", min, sec);
        
    outtextxy(700, 30, buffer);
}

void Timer::update(){

    while(lives.display_life() > 0){
        delay(1000);

        if(min == 0 && sec == 0)
            break;
        
        if(sec == 0){
            min--;
            sec = 60;
        }

        sec--;

        changeColour();
    }
}

void Timer::changeColour(){
    if(min == 0 && sec < 45)
        displayTimer(RED);
    else if(min == 0 && sec >= 45)
        displayTimer(YELLOW);
    else
        displayTimer(GREEN);
}