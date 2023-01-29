#include <iostream>
#include <string>
#include <random>

using namespace std;

#include "mole.hpp"

// Mole::Mole() : Characters(){
//     // Initialize random number generator
//     mt19937 rng(random_device{}());
//     uniform_int_distribution<int> dist(0, 550);

//     // Set random position and speed for the mole
//     x = dist(rng);
//     y = dist(rng);
//     speed = dist(rng);
// }

// Mole::~Mole(){ cout << "Destroy Mole" << endl; }

// void Mole::initState(){
//     // Initialize the mole's state as hidden
//     isVisible = false;
//     isHit = false;
// }

// void Mole::updatePosition(){
//     // Update the mole's position based on its speed
//     y += speed;
// }

// void Mole::hide(){
//     isVisible = false;
//     isHit = false;
// }

// void Mole::show(){
//     isVisible = true;
// }

// void Mole::isMouseClicked(int x, int y){
//     // Check if the mouse click is within the bounds of the mole
//     int xMin = this->x - 50;
//     int xMax = this->x + 50;
//     int yMin = this->y - 50;
//     int yMax = this->y + 50;

//     if(x >= xMin && x <= xMax && y >= yMin && y <= yMax){
//         isHit = true;
//     }
//     else{
//         isHit = false;
//     }
// }

// bool Mole::getIsHit() const{
//     return isHit;
// }

// int Mole::getSpeed() const{ return speed; }

// void Mole::setSpeed(int value) { speed = value; }
Mole::Mole() : Characters(speed)
{
    // Initialize the mole's starting position and radius
    posX = 0;
    posY = 0;
    radius = 20;
    isHit = false;
}

Mole::~Mole()
{
    cout << "Destroy Mole" << endl;
}
bool Mole::getIsVisible() const
{
    return isVisible;
}

void Mole::setIsVisible(bool value)
{
    isVisible = value;
}
void Mole::initState()
{
    // Set the mole's starting position and visibility
    posX = rand() % 600;
    posY = rand() % 400;
    isVisible = false;
}

void Mole::updatePosition()
{
    // Update the mole's position based on its speed
    posX += speed;
}

void Mole::hide()
{
    // Hide the mole
    isVisible = false;
}

void Mole::show()
{
    // Show the mole
    isVisible = true;
}

void Mole::isMouseClicked(int x, int y)
{
    // Check if the mouse click is within the mole's radius
    if (sqrt((x - posX) * (x - posX) + (y - posY) * (y - posY)) <= radius)
    {
        isHit = true;
    }
    else
    {
        isHit = false;
    }
}
int Mole::getRadius() const { return radius; }
void Mole::setRadius(int value) { radius = value; }

bool Mole::getIsHit() const
{
    return isHit;
}
bool Mole::checkHit(int mouseX, int mouseY)
{
    // Get the center coordinates of the mole
    int centerX = mouseX+ radius;
    int centerY = mouseY + radius;

    // Calculate the distance between the mouse click and the center of the mole
    int xDiff = mouseX - centerX;
    int yDiff = mouseY - centerY;
    int distance = sqrt((xDiff * xDiff) + (yDiff * yDiff));

    // If the distance is less than the radius, the mouse click is inside the mole
    if (distance < radius)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Mole::getSpeed() const { return speed; }

void Mole::setSpeed(int value) { speed = value; }
