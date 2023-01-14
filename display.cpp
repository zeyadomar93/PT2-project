#include <graphics.h>
#include <string>

using namespace std;

#include "display.hpp"
#include "point.hpp"

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

void Display::draw(string photo, int _left, int _top, int _right, int _bottom) const
{
	readimagefile(photo.c_str(), _left, _top, _right, _bottom);
}

// void Display::text(int _x, int _y, char *textstring, int timerColor){
// 	setcolor(timerColor);
//     settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
//     outtextxy(_x, _y, textstring);
// }

Point Display::getCenter() const { return Point(x + width / 2, y + height / 2); }