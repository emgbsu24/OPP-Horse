horseRace: main.o horse.o race.o
	g++ -o horseRace main.o horse.o race.o

main.o: main.cpp horse.h race.h
	g++ -c main.cpp

horse.o: horse.cpp horse.h
	g++ -c horse.cpp

clean:
	rm -f horseRace *.o

run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace

