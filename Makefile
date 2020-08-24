asc: main.o
	g++ -o asc main.o

main.o: main.cpp
	g++ -c main.cpp 

clean:
	rm -f main.o asc.* 