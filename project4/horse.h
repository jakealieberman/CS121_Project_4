#ifndef horse_h
#define horse_h

#include <iostream>

class horse {
private:
    int position;
    int index;
    int trackLength;

public:
    horse();
    void init(int index, int trackLength);
    void advance();
    void printLane() const;
    bool isWinner() const;
};

#endif