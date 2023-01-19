#include <graphics.h>

#include "display.hpp"
#include "life.hpp"
#include "timer.hpp"
#include "score.hpp"
#include "image.hpp"
#include "hammer.hpp"

// TODO: display menu
void menu(){
    // TODO: design background for menu and place here
    // display.draw("images/background.jpg", 0, 0, screenWidth, screenHeight);
    // image.draw("images/btn_play.jpg", "images/btn_play_mask.jpg");

}

// TODO: display gameplay
void gameplay(){
    Life life(3);

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
    Timer timer;
    Score score;
    Hammer hammer;
    Image image;

    display.draw("images/background.jpg", 0, 0, screenWidth, screenHeight);

    // test scoreboard
    image.setHeight(80);
    image.setWidth(screenWidth/2);
    image.read("images/box.jpg", "images/box_mask.jpg");
    //image.setHeight(100);
    image.draw(screenWidth/4, 10);
    
    int x = screenWidth - 160;
    int y = screenHeight - hammer.getHeight() - 50;

    // test hammer
    hammer.setLeft(x);
    hammer.setTop(y);
    hammer.initState();
    
    // test score
    score.displayScore();

    // test timer
    timer.initState(1, 30);
    timer.update();

	while (!kbhit()){
        delay(10000);
    }

    if (key == 0) 
        key = getch();
    
    switch (toupper(key)){
        case 'q':
        break;
    }
}
