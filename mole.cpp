// TODO
// create 6 mole objects
// do array of random visibility (moles popping up randomly not in order)
// do array moles position
// do array of random time interval (seconds between moles showing up)

#include <graphics.h>
#include <string>

using namespace std;

#include "characters.hpp"

class Mole : public Characters{
    private:
        
    public:
        Mole();
        void initState();
        void molePosition();
        void hideShow();
};