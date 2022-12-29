// Programming Technique II (SCSJ1023)
// Semester 1, 2018/2019

// ? Tutorial 7: Associations, Aggregation and Composition

#include <graphics.h>
#include "ball.hpp"
#include "room.hpp"

// Task 5:
//    Review the main function before running.

int main()
{
	int screenWidth = getmaxwidth();
	int screenHeight = getmaxheight();

	Room *room;

	initwindow(screenWidth, screenHeight, "Tutorial 7-Associations");

	Room rooms[] = {
		Room(0, 0, screenWidth / 2, screenHeight, COLOR(255, 0, 0)),
		Room(screenWidth / 2, 0, screenWidth / 2, screenHeight, COLOR(0, 0, 255))};

	Ball balls[] = {
		Ball(Point(100, screenHeight / 4), 100, YELLOW, 50, 50),
		Ball(Point(100, screenHeight / 4), 150, RED, 50, -100)};

	Point p = rooms[0].getCenter();
	balls[0].setLocation(p);
	balls[1].setLocation(p);

	balls[0].setRoom(rooms);
	balls[1].setRoom(rooms);

	for (int r = 0; r < 2; r++)
		rooms[r].draw();

	for (int b = 0; b < 2; b++)
		balls[b].draw();

	while (!kbhit())
	{
		delay(125);

		for (int b = 0; b < 2; b++)
			balls[b].move();
	}

	return 0;
}
