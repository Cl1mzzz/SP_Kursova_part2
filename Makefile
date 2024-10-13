all: task2

task2: main.o calculator.o hellomir.o 
	g++ main.o calculator.o hellomir.o  -o task2

main.o: main.cpp
	g++ -c main.cpp
 
calculator.o: calculator.cpp
	g++ -c calculator.cpp

hellomir.o: hellomir.cpp
	g++ -c hellomir.cpp
clean:
	rm -rf *.o task2
