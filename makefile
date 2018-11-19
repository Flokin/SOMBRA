arbre : main.cpp arbre.o
	g++ main.cpp -o arbre

arbre.o : arbre.cpp arbre.h
	g++ -c arbre.cpp -o arbre.o

clean :
	rm * .o
