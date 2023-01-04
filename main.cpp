
#include <graphics.h>
#include "ball.hpp"
#include "display.hpp"
#include "life.hpp"

// Task 5:
//    Review the main function before running.

int main()
{
	int screenWidth = getmaxwidth();
	int screenHeight = getmaxheight();

	Display *room;

	initwindow(screenWidth, screenHeight, "Group ERD");
Display display;
Life life(3);
display.drawLife(life.display_life());
// display.draw();

	// Display rooms[] = {
	// 	// Display(0, 0, screenWidth / 2, screenHeight, COLOR(255, 0, 0)),
	// 	// Display(screenWidth / 2, 0, screenWidth / 2, screenHeight, COLOR(0, 0, 255))};

	// Ball balls[] = {
	// 	Ball(Point(100, screenHeight / 4), 100, YELLOW, 50, 50),
	// 	Ball(Point(100, screenHeight / 4), 150, RED, 50, -100)};

	// Point p = rooms[0].getCenter();
	// balls[0].setLocation(p);
	// balls[1].setLocation(p);

	// balls[0].setDisplay(rooms);
	// balls[1].setDisplay(rooms);

	// for (int r = 0; r < 2; r++)
	// 	rooms[r].draw();

	// for (int b = 0; b < 2; b++)
	// 	balls[b].draw();

	while (!kbhit())
	{
		delay(8000);

		for (int b = 0; b < 2; b++){
			// balls[b].move();
			int xf=5;
	}

	return 0;
}
}
