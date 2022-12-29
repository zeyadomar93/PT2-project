#include <graphics.h>

class Ball
{
private:
    // attributes or member variables
    // location, size, presentation
    int x, y;
    int size;
    int color;

public:
    // methods or member functions
    // constructor, accesor (getter), mutator (setter), destructor

    Ball(int _x, int _y, int _size, int _color = WHITE) : x(_x), y(_y), size(_size), color(_color) {}

    int getX() const { return x; }

    int left() const { return x - size; }
    void left(int l) { x = l + size; }
    int right() const { return x + size; }

    int getY() const { return y; }
    void setY(int value) { y = value; }
    void setColor(int value) { color = value; }

    // DRY vs WET code

    void _draw(int c) const
    {
        setcolor(c);
        setfillstyle(SOLID_FILL, c);
        fillellipse(x, y, size, size);
    }

    void draw() const { _draw(color); }
    void undraw() const { _draw(BLACK); }

    void moveTo(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void moveBy(int dx, int dy)
    {
        x += dx;
        y += dy;
    }
};

int main()
{
    int screenWidth = getmaxwidth();
    int screenHeight = getmaxheight();
    char key = 0;

    initwindow(screenWidth, screenHeight, "Simple Animation");

    Ball b(screenWidth / 2, screenHeight / 2, 100, COLOR(255, 0, 0));

    b.draw();

    while (key != 27) // 27 is the ASCII code for key Esc
    {
        if (kbhit())
        {
            key = getch();

            if (key == 0) // special keys like arrow keys need to call to getch() twice.
                key = getch();

            switch (toupper(key))
            {
            case 'W':
                b.undraw();
                b.setColor(WHITE);
                b.draw();
                break;
            }
        }
    }
    return 0;
}
