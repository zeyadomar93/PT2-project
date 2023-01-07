#ifndef SCORE_H
#define SCORE_H

// #define MAX_SCORE 7

#include "hammer.hpp"

class Score{
    private:
        int score[3] = {1, 3, 5};
        int totalScore;

        Hammer hammer;

    public:
        Score(int _totalScore = 0);
        void initState();
        int update();
        int getTotalScore() const;
        void reset();
};

#endif