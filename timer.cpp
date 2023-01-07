#include <iostream>
#include <string>
#include <graphics.h>
using namespace std;

#include "timer.hpp"

// sample variable
int gameStart = 0;
int lives = 3;

Timer::Timer(int _min, int _sec):min(_min), sec(_sec){}

void initState(int _min, int _sec){
    while(gameStart = 0){
        delay(1000);

        if(_min == 0 && _sec == 0)
            break;

        if(_sec == 0){
            _sec = 60;
            _min--;
        }

        _sec--;
    }

    // go to game over once done
}

void Timer::displayTimer(int timerColor){
    setcolor(timerColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    outtextxy(200, 100, "Min");

    setcolor(timerColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    outtextxy(200, 100, "Sec");
}

int Timer::update(int _min, int _sec){
    if(_min == 1)
        displayTimer(GREEN);
    else if(_min == 0 && _sec >= 45)
        displayTimer(YELLOW);
    else
        displayTimer(RED);
}

/*int stop() const{
    if(lives = 0){

    }
        
        break;
        // stop timer, go to game over
}*/

Timer Timer::reset(){
    Timer time;
    time.min = 1;
    time.sec = 30;

    return time;
}
