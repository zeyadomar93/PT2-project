#include <iostream>
#include <string>
#include <cstring>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctime>

using namespace std;

#include "timer.hpp"

Timer::Timer(int _min, int _sec, double _elapsedTime, int _timerColor):
    min(_min), sec(_sec), elapsedTime(_elapsedTime), timerColor(_timerColor){}

void Timer::initState(int _min, int _sec){
    min = _min;
    sec = _sec + 1;

}

void Timer::displayTimer(int timerColor){
    char buffer[10];

    setbkcolor(COLOR(255,156,0));
    setcolor(timerColor);
    settextstyle(BOLD_FONT, HORIZ_DIR, 5);
    sprintf(buffer, "%d:%d", min, sec);

    if(sec < 10)
        sprintf(buffer, "%d:0%d", min, sec);
        
    outtextxy(700, 30, buffer);
}

bool Timer::update(){
    delay(1000);

    if(min == 0 && sec == 0)
        return false;
    
    if(sec == 0){
        min--;
        sec = 60;
    }

    sec--;

    // clock_t end_wait;
	// end_wait = clock () + sec * CLK_TCK ;

	// while (clock() < end_wait) {}

    changeColour();

    return true;
}

void Timer::changeColour(){
    if(min == 0 && sec < 45)
        displayTimer(RED);
    else if(min == 0 && sec >= 45)
        displayTimer(YELLOW);
    else
        displayTimer(GREEN);
}

