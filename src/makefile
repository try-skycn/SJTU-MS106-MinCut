CC = c++

main: main.o graph.o unionSet.o random.o
	$(CC) -o main main.o graph.o unionSet.o random.o

random.o: random.cpp random.h
	c++ -c random.cpp

unionSet.o: unionSet.cpp unionSet.h
	c++ -c unionSet.cpp

graph.o: graph.cpp graph.h unionSet.h
	c++ -c graph.cpp

main.o: graph.h
	c++ -c main.cpp

clean:
	rm *.o