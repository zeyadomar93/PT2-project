#ifndef SCORE_H
#define SCORE_H

class Score{
    private:
        int score[3] = {1, 3, 5};
        int totalScore;

    public:
        Score(int _totalScore = 0);
        void initState();
        int update();
        int getTotalScore() const;
        void displayScore();
};

#endif