#include <graphics.h>

#include "score.hpp"
#include "hammer.hpp"

Score::Score(int _totalScore):totalScore(_totalScore){
    // score[3] = nullptr;
};

void Score::initState(){
    totalScore = 0;
    // score[3] = {1, 3, 5};
}

int Score::update(){
    int _speed = hammer.getSpeed();

    if(hammer.smash() == false)
        return totalScore -= score[1];
    else{
        if(_speed >= 5)
            return totalScore += score[0];
        else if(_speed >= 3 && _speed < 5)
            return totalScore += score[1];
        else
            return totalScore += score[2];
    }
}

void Score::displayScore(){
    char buffer[10];

    setcolor(WHITE);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    sprintf(buffer, "SCORE %d", totalScore);
    outtextxy(20, 20, buffer);
}

int Score::getTotalScore() const{ return totalScore; }
