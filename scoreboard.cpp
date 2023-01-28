#include <graphics.h>

using namespace std;

#include "scoreboard.hpp"

Scoreboard::Scoreboard(){}

void Scoreboard::initState(int min, int sec, int screenWidth, int screenHeight){
    timer.initState(min, sec);

    display.setHeight(80);
    display.setWidth(screenWidth/2);

    display.readMask("images/ui/board.jpg", "images/mask/board_mask.jpg");
    display.drawMask(screenWidth/4, 10);
}

void Scoreboard::update(){
    life.display_life();
    score.displayScore();
    timer.update();
}

// TODO: Function to get life for better access