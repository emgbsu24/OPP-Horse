#ifndef HORSE_H
#define HORSE_H

class Horse {
private:
	int position;
	int index;
	int TRACK;

public:
	Horse();
	void init(int index, int TRACK);
	void advance();
	void printLane() const;
	bool isWinner() const;
};
