
#include <graphics.h>
#include "display.hpp"
#include "life.hpp"

int main()
{
	int screenWidth = getmaxwidth();
	int screenHeight = getmaxheight();

	// Display *room;

	initwindow(screenWidth, screenHeight, "Group ERD");
	Display display;
	Life life(3);
	display.draw();
	// display.drawLife(life.display_life());

	while (!kbhit())
        {

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
