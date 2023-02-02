#include <graphics.h>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "display.hpp"
#include "life.hpp"
#include "timer.hpp"
#include "score.hpp"
#include "hammer.hpp"
#include "mole.hpp"
#include "scoreboard.hpp"
#include "characters.hpp"

using namespace std;

#define OBJECTS 8

Display menu(int screenWidth, int screenHeight){
    Display display;

    display.drawNormal("images/ui/first_bg.jpg", 0, 0, screenWidth, screenHeight);
 
    display.setSize(400, 180);
    display.setX(screenWidth/3 + 40);
    display.setY(screenHeight/2);

    display.readMask("images/ui/play_btn.jpg", "images/mask/play_btn_mask.jpg");
    display.drawMask(display.getX(), display.getY());

    return display;
}

// Display gameover
void gameover(int screenWidth, int screenHeight, Life life){

    Display display;

    if (life.getLife() <= 0){
        display.drawNormal("images/ui/third_bg.jpg", 0, 0, screenWidth, screenHeight);
    }
}

// Display gameplay
void gameplay(int screenWidth, int screenHeight){

    srand(time(NULL));

    Display display;
    Life life(3);
    Timer timer;
    Score score;
    Scoreboard scoreboard;

    Characters *characters[OBJECTS];
    Characters *clickedObject = nullptr;

    int x = screenWidth - 160;
    int y = screenHeight - 150;

    int posX = 0; 
    int posY = 0;

    display.drawNormal("images/ui/second_bg.jpg", 0, 0, screenWidth, screenHeight);
    scoreboard.initState(screenWidth, screenHeight);
    score.initState();
    timer.initState(1, 30);

    score.displayScore();

    Life lives[3] = {
        life.display_life(screenWidth/2 + 180),
        life.display_life(screenWidth/2 + 210),
        life.display_life(screenWidth/2 + 240)
    };

    characters[0] = new Hammer(100, 100, x, y);
    characters[0]->initState(); 
    delay(1000);

    for(int i=1; i<OBJECTS; i++){

        int randomX = 1 + rand() % (screenWidth - 150) + 50;
        int randomY = 100 + rand() % screenHeight - 50;
        // int speed = rand() % 5;

        characters[i] = new Mole(60, 60, randomX, randomY);
    }  

    for(int i=0; i<3; i++){
        lives[i];
    } 

    while(timer.update() == true){
        characters[0]->putObject();

        for(int i=1; i<OBJECTS; i++){
            characters[i]->putObject();

            // score.update(characters[i]);

            if(ismouseclick(WM_LBUTTONDOWN)){

                cout << "mouse clicked ";

                getmouseclick(WM_LBUTTONDOWN, posX, posY);
                if(characters[i]->isMouseClicked(posX, posY)){

                    cout << "mole clicked ";
                    int speed = rand() % 5;
                    characters[i]->modifySpeed(speed);
                }

            }
        }
        
        if (life.getLife() > 3){
            timer.update();
        }

        if(timer.update() == false){
            characters[0]->stop();

            for(int i=1; i<OBJECTS; i++)
                characters[i]->stop(); 
            break;
        }
    
    }
    
}

bool checkMouseClick(
    int mouseX, int mouseY, 
    int _firstBoundaryX, int _secondBoundaryX, 
    int _firstBoundaryY, int _secondBoundaryY){
    
    if((mouseX >= _firstBoundaryX && mouseX <= _secondBoundaryX) && 
        (mouseY >= _firstBoundaryY && mouseY <= _secondBoundaryY)){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int screenWidth = getmaxwidth();
    int screenHeight = getmaxheight();
    int key;
    int mouseX = 0; 
    int mouseY = 0;

    initwindow(screenWidth, screenHeight, "Smash n Pause");

    Display display = menu(screenWidth, screenHeight);

    while(key != 27){
        if(kbhit()){
            key = getch();
        }

        if(ismouseclick(WM_LBUTTONDOWN)){
			getmouseclick(WM_LBUTTONDOWN, mouseX, mouseY);
            int firstBoundaryX = display.getX();
            int secondBoundaryX = firstBoundaryX + display.getWidth();
            int firstBoundaryY = display.getY();
            int secondBoundaryY = firstBoundaryY + display.getHeight();

            if(checkMouseClick(mouseX, mouseY, 
                firstBoundaryX, secondBoundaryX, 
                firstBoundaryY, secondBoundaryY)){
                delay(1000);
                // display.freeMask();
                gameplay(screenWidth, screenHeight);
                break;
            }
		}
    }
    return 0;
}
