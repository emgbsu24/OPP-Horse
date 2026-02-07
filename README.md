# OPP-Horse
Race UML

classDiagram

Class Race {
   - int TRACK
   - int HorseNum
   - Horse horses[NUMHORSES]
   + Race()
   + Void start()
}


Class Horse {
   - int position 
   + Horse()
   + void move()
   + bool win(int TRACK)
   + void print()
}
 


