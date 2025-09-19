#ifndef race_h
#define race_h

#include "horse.h"

class race {
private:
    static const int track_length = 15;
    static const int num_horses = 5;
    horse horses[num_horses];

public:
    race();
    void start();
};

#endif