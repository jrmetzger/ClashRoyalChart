ClashRoyal: main.o Cards.o Sort.o Search.o DeckMaker.o takeCard.o
	gcc -o ClashRoyal main.o Cards.o Sort.o Search.o DeckMaker.o takeCard.o

main.o: main.c ClashRoyal.h
	gcc -c main.c

Cards.o: Cards.c ClashRoyal.h
	gcc -c Cards.c

takeCard.o: takeCard.c ClashRoyal.h
	gcc -c takeCard.c

Sort.o: Sort.c ClashRoyal.h
	gcc -c Sort.c

Search.o: Search.c ClashRoyal.h
	gcc -c Search.c

DeckMaker.o: DeckMaker.c ClashRoyal.h
	gcc -c DeckMaker.c

clean:
	$(RM) main.o Cards.o Sort.o Search.o DeckMaker.o takeCard.o




