main: main.o Binaria.o 
	g++ main.o Binaria.o 
 
main.o: main.cpp Binaria.h 
	g++ -c main.cpp 
 
Binaria.o:  Binaria.h Binaria.cpp
	g++ -c Binaria.cpp
 
clean: 
	rm -f *.0 *.main
