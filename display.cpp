#include <graphics.h>
#include <string>

using namespace std;

#include "display.hpp"
#include "point.hpp"

// Task 4:
//    Declaration and definition for this class have been given.
//    Review all the methods of this class.

Display::Display(int _x, int _y, int _width, int _height, int _color)
{
	set(_x, _y, _width, _height, _color);
}

int Display::getX() const { return x; }
int Display::getY() const { return y; }
int Display::getWidth() const { return width; }
int Display::getHeight() const { return height; }
int Display::getColor() const { return color; }
int Display::getRight() const { return x + width; }
int Display::getBottom() const { return y + height; }

void Display::setX(int value) { x = value; }
void Display::setY(int value) { y = value; }
void Display::setWidth(int value) { width = value; }
void Display::setHeight(int value) { height = value; }
void Display::setSize(int _width, int _height)
{
	width = _width;
	height = _height;
}
void Display::setColor(int value) { color = value; }
void Display::set(int _x, int _y, int _width, int _height, int _color)
{
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	color = _color;
}

void Display::draw(string photo) const
{
	// setfillstyle(SOLID_FILL, color);
	// bar(x, y, x + width, y + height);
	readimagefile(photo.c_str(), 0, 0, 1380, 750);
}
void Display::drawLife(int life) const
{
	// setfillstyle(SOLID_FILL, color);
	// bar(x, y, x + width, y + height);
	for(int i=0;i<life;i++){

		readimagefile("images/highres2.jpg",0,200,200,0);
	}
}

Point Display::getCenter() const { return Point(x + width / 2, y + height / 2); }