#include <iostream>
#include <string>
using namespace std;

#include "score.hpp"

// dummy data, 0 = miss, hit = 1
int hammer = 0;
int speed = 0;

Score::Score(int _totalScore):totalScore(_totalScore){
    // score[3] = nullptr;
};

// set score to 0
void Score::initState(){
    totalScore = 0;
    // score[3] = {1, 3, 5};
}

// update score if player misses + speed of player hits
// must take class hammer or mole?
int Score::update(){
    if(hammer == 1){
        if(speed >= 5)
            return totalScore += score[0];
        else if(speed >= 3 && speed < 5)
            return totalScore += score[1];
        else
            return totalScore += score[2];
    }else
        return totalScore -= score[1];
}

int Score::getTotalScore() const{ return totalScore; }

// same content as init
void Score::reset(){
    totalScore = 0;
}