race: main.o horse.o race.o
	g++ -g main.o horse.o race.o -o race

main.o: race.h horse.h main.cpp
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: race.h horse.h race.cpp
	g++ -c -g race.cpp

clean:
	rm *.o
	rm race

run: race
	./race

debug: race
	gdb ./race
