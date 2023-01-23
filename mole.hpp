#ifndef MOLE_H
#define MOLE_H

using namespace std;

#include "characters.hpp"

class Mole : public Characters{
    public:
        Mole();
        void initState();
        void molePosition();
        void hide();
        void show();
};

#endif

