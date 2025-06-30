imp_graph: main.o grafo.o
	gcc -o imp_graph main.o grafo.o

main.o: main.c grafo.h
	gcc -Wall -c main.c

grafo.o: grafo.c grafo.h
	gcc -Wall -c grafo.c

.PHONY: clean cleanall
clean:
	rm -f *.o
cleanall:
	rm -f imp_graph *.o