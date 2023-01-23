#include <graphics.h>

#include "display.hpp"
#include "life.hpp"
#include "timer.hpp"
#include "score.hpp"
#include "hammer.hpp"
#include "scoreboard.hpp"

// TODO: display menu
void menu(){
    // TODO: design background for menu and place here
    // display.draw("images/background.jpg", 0, 0, screenWidth, screenHeight);
    // image.draw("images/btn_play.jpg", "images/btn_play_mask.jpg");
}

// TODO: display gameplay
void gameplay(){
    // Life life(3);

    // sample to display lives
    // TODO: corporate array to display it 
    // for(int i=0; i<life.display_life(); i++)
    //     display.draw("images/heart.png",0,200,200,0);
}

// TODO: diplay gameover
void gameover(){

}

bool play_clicked = false;
void play_handler(int x, int y){
    if (getpixel(x,y) == RED)
        play_clicked = true;
}

int main()
{
	int screenWidth = getmaxwidth();
	int screenHeight = getmaxheight();
    int key;

	initwindow(screenWidth, screenHeight, "Group ERD");
	
    Display display;
    Life life(3);
    // Timer timer;
    // Score score;
    Hammer hammer;
    POINT cursor;
    Scoreboard scoreboard;

    display.drawNormal("images/background.jpg", 0, 0, screenWidth, screenHeight);
    
    // test scoreboard
    // display.setHeight(80);
    // display.setWidth(screenWidth/2);

    // display.readMask("images/ui/board.jpg", "images/mask/board_mask.jpg");
    // display.drawMask(screenWidth/4, 10);

    // test score
    // score.displayScore();

    // test timer = issue, cannot fit with hammer delay
    // timer.initState(1, 30);

    // test scoreboard
    // scoreboard.initState(1, 30, screenWidth, screenHeight);
    
    int x = screenWidth - 160;
    int y = screenHeight - hammer.getHeight() - 50;

    // test hammer
    hammer.setLeft(x);
    hammer.setTop(y);
    hammer.initState();

    while(life.display_life() > 0){

        // timer.update();
        // scoreboard.update();
        hammer.mouseInput(cursor);
    }

    if (key == 0) 
        key = getch();
    
    switch (toupper(key)){
        case 'q':
        break;
    }
}
