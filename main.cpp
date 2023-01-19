#include <graphics.h>
#include "display.hpp"
#include "life.hpp"
#include "timer.hpp"
#include "score.hpp"
#include "image.hpp"
#include "hammer.hpp"

// TODO: display menu
void menu(int boxColor, int textColor){
    setcolor(boxColor);
    for(int i=0; i<10; i++)
        rectangle(55-1, 75-i, 240+i, 215+i);
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

    display.draw("images/background.jpg", 0, 0, screenWidth, screenHeight);
    
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
