#include <graphics.h>
#include <string>

using namespace std;

#include "display.hpp"

Display::Display(int _x, int _y, int _width, int _height){
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	image = mask = background = nullptr;
}

Display::~Display() { freeMask(); }

void Display::freeMask(){
    if (image)
        delete[](ImageData) image;
    if (mask)
        delete[](ImageData) mask;
    if (background)
        delete[](ImageData) background;
}

void Display::drawNormal(string photo, int _left, int _top, int _right, int _bottom) const{
	readimagefile(photo.c_str(), _left, _top, _right, _bottom);
}

void Display::readMask(string imageFile, string maskFile){
    image = loadImage(imageFile);
    mask = loadImage(maskFile);
}

int Display::getMemorySize() const { return imagesize(0, 0, width, height); }

ImageData Display::loadImage(string file){
    ImageData _image = new char[getMemorySize()];

    setactivepage(1);
    readimagefile(file.c_str(), 0, 0, width, height);
    getimage(0, 0, width, height, _image);
    setactivepage(0);

    return _image;
}

void Display::snapBackground(int left, int top){
    if (!background)
        background = new char[getMemorySize()];

    getimage(left, top, left + width, top + height, background);
}

void Display::drawMask(int left, int top){
    snapBackground(left, top);
    putimage(left, top, mask, OR_PUT);

    putimage(left, top, image, AND_PUT);
}

void Display::undrawMask(int left, int top){
    if (!background)
        return;
    putimage(left, top, background, COPY_PUT);
}

int Display::getX() const { return x; }
int Display::getY() const { return y; }
int Display::getWidth() const { return width; }
int Display::getHeight() const { return height; }
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

// void Display::text(int _x, int _y, char *textstring, int timerColor){
// 	setcolor(timerColor);
//     settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
//     outtextxy(_x, _y, textstring);
// }
