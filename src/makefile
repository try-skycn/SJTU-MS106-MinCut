CC = c++

BDIR = ../bin
IDIR = ../include
ODIR = ../obj

CFLAGS = -I$(IDIR)

_OBJ = main.o graph.o unionSet.o random.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))

$(BDIR)/main: $(OBJ)
	$(CC) -o $@ $^

$(ODIR)/main.o: main.cpp $(IDIR)/graph.h $(IDIR)/random.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/graph.o: graph.cpp $(IDIR)/graph.h $(IDIR)/random.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/unionSet.o: unionSet.cpp $(IDIR)/unionSet.h 
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/random.o: random.cpp $(IDIR)/random.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm $(ODIR)/*.o