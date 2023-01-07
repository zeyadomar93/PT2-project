
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
	display.draw("images/highres2.jpg");
	// display.drawLife(life.display_life());

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
