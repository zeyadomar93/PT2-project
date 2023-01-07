#ifndef SCORE_H
#define SCORE_H

#include <string>
using namespace std;

#define MAX_SCORE 7

class Score{
    private:
        int score[3] = {1, 3, 5};
        int totalScore;

        // Life lives;

    public:
        Score(int _totalScore = 0);
        void initState();
        int update();
        int getTotalScore() const;
        void reset();
};

#endif