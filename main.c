#include "ClashRoyal.h"

/* Main function */
int main(){
	
	takeCard();
	searchElixir();
	return 0;
	
	system("clear");
	takeCard();
	printf("\nWelcome to my Clash Royal Program, please enter an option:\n");
	printf("\n");
	printf("[0]	:	Deck Maker\n");
	printf("\n");
	printf("Sort by \n");
	printf("[1]	: 	Name\n");
	printf("[2]	: 	Cost [1 - 10]\n");
	printf("[3]	: 	Rarity - Level [Common [1-12], Rare [1-7], Epic [1-4], Legendary[1]]\n");
	printf("[4]	: 	Arena [0 - 8]\n");
	printf("[5] 	: 	Type [Spell, Troop, Building]\n");
	printf("[6]	: 	Hitpoints\n");
	printf("[7]	:	Damage\n");
	printf("[8]	: 	Hit Speed\n");
	printf("[9]	:	Target Type [Air, Ground, Air & Ground]\n");
	printf("[10]	:	Speed [null, slow, medium, fast, very fast]\n");
	printf("\n");
	printf("Search for\n");
	printf("[11]	: 	Name\n");
	printf("[12]	: 	Cost [1 - 10]\n");
	printf("[13]	: 	Rarity by Level [Common [1-12], Rare [1-7], Epic [1-4], Legendary[1]]\n");
	printf("[14]	: 	Arena [0 - 8]\n");
	printf("[15]	: 	Type [Spell, Troop or Building]\n");
	printf("[16]	:	Target Type [Air, Ground, Air & Ground]\n");
	printf("[17]	:	Speed [null, slow, medium, fast, very fast]\n");
	printf("\n");
	printf("[q]	: 	Quit\n\n");

	scanf("%d", &chooseOption); //Stores menu choice into chooseOption
	end();

	if (chooseOption == 0){
		deckMaker();
	}

	if (chooseOption == 1){
		sortName();
	}

	if (chooseOption == 2){
		sortElixir();
	}

	if (chooseOption == 3){
		sortRarity();
	}

	if (chooseOption == 4){
		sortArena();
	}

	if (chooseOption == 5){
		sortType();
	}

	if (chooseOption == 11){
		searchName();
	}

	if (chooseOption == 12){
		searchElixir();
	}

	if (chooseOption == 13){
		searchRarity();
	}

	if (chooseOption == 14){
		searchArena();
	}

	if (chooseOption == 15){
		searchType();
	}
	
	/*
	printf("Again?: \n");
	printf("'1'\t: Yes\n");
	printf("'other'\t: No\n\n");
	scanf("\n%d", &answer);

	if (answer == 1){
		system("clear");
		main();
		return 0;
	}
	*/

	end();
	return 0;
}