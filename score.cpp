#include <graphics.h>

#include "score.hpp"

Score::Score(int _totalScore):totalScore(_totalScore){
    // score[3] = nullptr;
};

void Score::initState(){
    totalScore = 0;
    // score[3] = {1, 3, 5};
}

// TODO: play sound, display +pluspoint near hammer
int Score::update(){
    // if(mole.getIsHit() == false)
    //     return totalScore -= score[1];
    // else{
    //     if(_speed >= 5)
    //         return totalScore += score[0];
    //     else if(_speed >= 3 && _speed < 5)
    //         return totalScore += score[1];
    //     else
    //         return totalScore += score[2];
    // }

    return 0;
}

void Score::displayScore(){
    char buffer[10];

    setbkcolor(COLOR(255, 156, 0));
    setcolor(WHITE);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3.5);
    sprintf(buffer, "SCORE %d", totalScore);
    outtextxy(500, 38, buffer);
}

int Score::getTotalScore() const{ return totalScore; }
