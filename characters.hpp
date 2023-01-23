#ifndef CHARACTERS_H
#define CHARACTERS_H

using namespace std;

// TODO: Revise on pointers and arrays
class Characters{
    protected:
        int speed;
        int num[10];
    public:
        Characters(int speed = 0, int num[10] = {});

        int getSpeed() const;
        int getNum() const;

        void setSpeed(int value);
        // void setNum(int value[]);
};

#endif