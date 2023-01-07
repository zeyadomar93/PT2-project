#include <graphics.h>
#include "display.hpp"
#include "life.hpp"

// TODO: display menu
void menu(int boxColor, int textColor){
    setcolor(boxColor);
    for(int i=0; i<10; i++)
        rectangle(55-1, 75-i, 240+i, 215+i);

    setcolor(textColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    outtextxy(240, 200, "PLAYGAME");

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

	display.draw("images/highres2.jpg", 0, 0, 1380, 750);

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
