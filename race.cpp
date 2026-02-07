#include "race.h"
#include <iostream>

race::Race() {
	for (int i = 0; i < NUM_HORSES; i++) {
		horses[i].init(i, TRACK);
	}
}

void Race::start() {
	bool keepGoing = true

	while (keepGoing) {
		for (int i = 0; i < NUM_HORSES; i++) {
			horses[i].advance();
			horses[i].printLane():

			if (horses[i].isWinner()) {
				std::cout << "Horse " << i << " wins!" << std::endl;
				keepGoing = false;
				break;
			}
		}
		std::cout << std::endl;
	}
}

