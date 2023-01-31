#ifndef SCORE_H
#define SCORE_H

#include "characters.hpp"

class Score{
    private:
        int score[3] = {1, 3, 5};
        int totalScore;

    public:
        Score(int _totalScore = 0);
        void initState();
        int update(Characters *m);
        int getTotalScore() const;
        void displayScore();
};

#endif