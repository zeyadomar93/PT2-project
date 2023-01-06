#ifndef SCORE_H
#define SCORE_H

#include <string>
using namespace std;

#define MAX_SCORE 7

class Score{
    private:
        int score;
        int totalScore;

        // Life lives;

    public:
        Score(int _score = 0);
        void initState(int _score, int _totalScore){}
        int update() const{}
        int getScore() const{}
        void reset(int _score){}
};

#endif