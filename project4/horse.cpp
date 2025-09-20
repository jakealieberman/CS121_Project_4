#include "horse.h"
#include <cstdlib>   

// horse
horse::horse() : position(0), index(0), trackLength(0) {}
void horse::init(int num, int track) {
    index = num;
    trackLength = track;
    position = 0;
}
void horse::advance() {
    int step = std::rand() % 2;
    position += step;
}
void horse::printLane() const {
    for (int pos = 0; pos < trackLength; pos++) {
        if (pos == position) {
            std::cout << index;
        } else {
            std::cout << '.';
        }
    }
    std::cout << std::endl;
}
bool horse::isWinner() const {
    return position >= trackLength - 1;
} // end horse