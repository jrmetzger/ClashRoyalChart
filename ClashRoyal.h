// sources : 	http://www.tutorialspoint.com/cprogramming/c_structures.html
//				http://stackoverflow.com/questions/7911919/sorting-array-from-typedef-struct-in-c
//				http://www.engineersgarage.com/c-language-programs/accept-set-names-and-sort-them-alphabetical-order-using-structure
//				http://stackoverflow.com/questions/20378430/reading-numbers-from-a-text-file-into-an-array-in-c


#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#define MAX 42
#define WORD 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Struct of the Card */
struct Cards{
	float 	number;
	float 	level;
	char	name[WORD];
	float	elixirCost;
	char 	rarity[WORD];
	char 	type[WORD];
	float	hitpoints;
	float 	count;
	float	spawnLevel;
	float 	spawnSpeed;
	float 	damageSecond;
	float 	areaDamage;
	float	crownDamage;
	float	deathDamage;
	float 	hitSpeed;
	float	lifetime;
	float	duration;
	float	boost;
	char	targets[WORD];
	char 	speedType[WORD];
	float 	radius;
	float 	range;
	float 	deployTime;
	char 	arena[WORD];	
}card[MAX];

/* Variables */
struct Cards card[MAX];
int i,j,answer,input,chooseOption;
struct Cards temp;

/* ClashRoyal */
int main();

/* Cards */
void titleFull();
void end();
void alpha();
void takeCard();
void takeCardArena0();
void takeCardArena1();
void takeCardArena2();
void takeCardArena3();
void takeCardArena4();
void takeCardArena5();

/* Sort */
void sortName();
void sortElixir();
void sortRarity();
void sortArena();
void sortType();

/* Search */
void searchName();
void searchElixir();
void searchRarity();
void searchArena();
void searchType();

/* DeckMaker */
void deckMaker();

#endif