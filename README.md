# ClashRoyalChart

Organizer for Clash Royal for their Cards

To start program, go into the ClashRoyalChart directory

$ make

gcc -c main.c
gcc -c Cards.c
gcc -c Sort.c
gcc -c Search.c
gcc -c DeckMaker.c
gcc -o ClashRoyal main.o Cards.o Sort.o Search.o DeckMaker.o

$ ./ClashRoyal

