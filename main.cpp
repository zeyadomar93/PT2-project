
#include <graphics.h>
#include "display.hpp"
#include "life.hpp"

// sample menu
void menu(int boxColor, int textColor){
    setcolor(boxColor);
    for(int i=0; i<10; i++)
        rectangle(55-1, 75-i, 240+i, 215+i);

    setcolor(textColor);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    outtextxy(240, 200, "PLAYGAME");

}


int main()
{
	int screenWidth = getmaxwidth();
	int screenHeight = getmaxheight();

	// Display *room;

	initwindow(screenWidth, screenHeight, "Group ERD");
	Display display;
	Life life(3);

	display.draw("images/highres2.jpg", 0, 0, 1380, 750);

    // sample to display lives
    // corporate array to display it
    for(int i=0; i<life.display_life(); i++)
        display.draw("images/highres2.jpg",0,200,200,0);

	while (!kbhit()){
        delay(10000);
    }
    int key;
    key = getch();

    if (key == 0) 
        key = getch();
    switch (toupper(key))
    {
    case 'q':

        break;
    }
}
