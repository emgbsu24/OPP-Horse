#include "horse.h"
#include <iostream>
#include <cstdlib>

Horse::Horse() {
	position = 0;
	index = 0;
	TRACK = 0;
}

void Horse::init(int i, int tLength) {
	index = i;
	TRACK = tLength;
	position = 0;
}

void Horse::advance() {
	int coin = rand() %2;
	position += coin;
}

void Horse::printLane() const {
	for (int pos = 0; pos < TRACK; pos++) {
		if (pos == position) {
			std::cout << index;
		} else {
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

bool Horse::isWinner() const {
	return position >= TRACK;
}


