#ifndef RACE_H
#define RACE_H

#include "horse.h"

class Race {
private:
	static const int NUM_HORSES = 5;
	static const int TRACK = 15;
	Horse horses[NUM_HORSES];

public:
	Race();
	void start();
};
#endif 
