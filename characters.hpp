#ifndef CHARACTERS_H
#define CHARACTERS_H

using namespace std;

// TODO: Revise on pointers and arrays
class Characters{
    protected:
        int speed;

    public:
        Characters(int speed = 0);
        virtual ~Characters();

        virtual void initState() = 0;
        virtual void isMouseClicked(int x, int y) = 0;

        virtual int getSpeed() const = 0;
        virtual void setSpeed(int value) = 0;

};

#endif