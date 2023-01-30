#include <graphics.h>

#include "display.hpp"
#include "life.hpp"
#include "timer.hpp"
#include "score.hpp"
#include "hammer.hpp"
#include "scoreboard.hpp"
#include "characters.hpp"

#define OBJECTS 6

// TODO: display menu
void menu()
{
    // TODO: design background for menu and place here
    // display.draw("images/background.jpg", 0, 0, screenWidth, screenHeight);
    // image.draw("images/btn_play.jpg", "images/btn_play_mask.jpg");
}

// TODO: display gameplay
void gameplay(int screenWidth, int screenHeight)
{
    Display display;
    Life life(3);
    Timer timer;
    Score score;
    Scoreboard scoreboard;

    Characters *characters[OBJECTS];
    Characters *clickedObject = nullptr;

    display.drawNormal("images/background.jpg", 0, 0, screenWidth, screenHeight);
    scoreboard.initState(screenWidth, screenHeight);

    Life lives[3] = {
        life.display_life(screenWidth/2 + 180),
        life.display_life(screenWidth/2 + 210),
        life.display_life(screenWidth/2 + 240)
    };

    for(int i=1; i<OBJECTS; i++){
        characters[i] = new Mole();
    }

    while (life.getLife() > 0)
    {
        characters[0] = new Hammer();

        for(int i=0; i<3; i++){
            lives[i];
        }
    }
}

// TODO: display gameover
void gameover(Life life)
{
    if (life.getLife() <= 0)
    {
        return;
    }
}

Characters *characters[5];

void createMoles()
{
    for (int i = 0; i < 5; i++)
    
        characters[i] = new Mole();
}

int main()
{
    int screenWidth = getmaxwidth();
    int screenHeight = getmaxheight();
    int key;

    initwindow(screenWidth, screenHeight, "Smash n Pause");

    Display display;
    POINT cursor;

    // // test timer = issue, cannot fit with hammer delay
    // // timer.initState(1, 30);

    // int x = screenWidth - 160;
    // int y = screenHeight - hammer.getHeight() - 50;

    // // test hammer
    // hammer.setLeft(x);
    // hammer.setTop(y);
    // hammer.initState();

    // while (life.getLife() > 0)
    // {

    //     // timer.update();
    //     // scoreboard.update();
    //     hammer.mouseInput(cursor);
    // }

    gameplay(screenWidth, screenHeight);

    if (key == 0)
        key = getch();

    switch (toupper(key))
    {
    case 'q':
        break;
    }
}
