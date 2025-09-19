#include "race.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// race 
race::race() {
    std::srand(std::time(nullptr));
    for (int i = 0; i < num_horses; i++) {
        horses[i].init(i, track_length);
    }
}
// race start
void race::start() {
    bool winnerFound = false;
    while (!winnerFound) {
        
        // Move horses
        for (int i = 0; i < num_horses; i++) {
            horses[i].advance();
        }

        // Print lanes
        for (int i = 0; i < num_horses; i++) {
            horses[i].printLane();
        }

        // Check winners
        for (int i = 0; i < num_horses; i++) {
            if (horses[i].isWinner()) {
                std::cout << "Horse " << i << " wins!" << std::endl;
                winnerFound = true;
            }
        }
        if (!winnerFound) {
            std::cout << "Press enter for another turn";
            std::cin.ignore();
        }
    }
} // end race