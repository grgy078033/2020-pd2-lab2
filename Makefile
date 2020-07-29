Calculator: Calculator.o main.o
	g++ -o Calculator Calculator.o main.o

Calculator.o: Calculator.cpp Calculator.h
	g++ -c Calculator.cpp

main.o: main.cpp Calculator.h
	g++ -c main.cpp

clean:
	rm Calculator *.o
