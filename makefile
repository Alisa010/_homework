run: task2
	./task2

task2: main.o str.o
	g++ main.o str.o -o task2

main.o: main.cpp str.h
	g++ -c main.cpp -o main.o

str.o: str.cpp str.h
	g++ -c str.cpp -o main.o

clean:
	rm *.o task2
