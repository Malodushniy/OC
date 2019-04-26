lab3.o:
	g++ -D_REENTERANT -lpthread -c lab3.cpp
lab3:
	g++ -pthread lab3.o -o lab3
lab32.o:
	g++ -D_REENTERANT -lpthread -c lab32.cpp
lab32:
	g++ -pthread lab32.o -o lab32
lab33.o:
	g++ -D_REENTERANT -lpthread -c lab33.cpp
lab33:
	g++ -pthread lab33.o -o lab33
lab34.o:
	g++ -D_REENTERANT -lpthread -c lab34.cpp
lab34:
	g++ -pthread lab34.o -o lab34
clean:
	rm -R lab3*.o

