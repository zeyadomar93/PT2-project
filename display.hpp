#pragma once
#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>

using namespace std;

typedef char *ImageData;

class Display
{
private:
	int x, y;		   // The center coordinates. For specifing the location of the ball
	int width, height; // For the dimension purposes

	ImageData image, mask, background;

    int getMemorySize() const;
    ImageData loadImage(string file);
    void snapBackground(int left, int top);

public:
	Display(int _x = 0, int _y = 0, int _width = 0, int _height = 0);
	~Display();

	void drawNormal(string photo, int _left, int _top, int _right, int _bottom);
	
	void readMask(string imageFile, string maskFile);
    void freeMask();
	void drawMask(int left, int top);
	void undrawMask(int left, int top);

	int getX() const; // The left most x value of the room
	int getY() const; // The top most y value of the room
	int getWidth() const;
	int getHeight() const;
	int getColor() const;
	int getRight() const;  // The right most x value of the room
	int getBottom() const; // The bottom most y value of the room

	void setX(int value);
	void setY(int value);
	void setWidth(int value);
	void setHeight(int value);
	void setSize(int _width, int _height);
};

#endif
