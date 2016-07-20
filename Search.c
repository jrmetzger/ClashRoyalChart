#include "ClashRoyal.h"
//#include "takeCard.c"

/* Search by Name */
void searchName(){

}

/* Search by Elixir Cost */
void searchElixir(){
	system("clear");
	printf("Select the 'Elixir Cost' you would like to search for: ");
	scanf("%d", &input);

	system("clear");
	printf("Cards with value  %d", input);
	printf("\n\nLevel\tName\t\tRarity\t Type\t\tHtpoint\tDamSec\tArDam\tCrown\tHit\tTarget\t\tSpeed\t\tArena\n");
	printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n");
	if (input > 0 && input < 8){
		for(int i = 1; i < MAX; i++){
			for(j = i+1; j < MAX; j++){
				if(strcmp(card[i].rarity, card[j].rarity) > 0 ){
					temp    = card[i];
					card[i] = card[j];
					card[j] = temp;
				}
			}

			if (card[i].elixirCost == input){
				printf("%g\t%s%s%s\t%g\t%g\t%g\t%g\t%g\t%s\t%s\t%s\n", 		
						card[i].level, 			
						card[i].name, 			
						card[i].rarity, 		
						card[i].type, 			
						card[i].hitpoints,		
						card[i].damageSecond,	
						card[i].areaDamage, 	
						card[i].crownDamage, 	
						card[i].hitSpeed, 		
						card[i].targets, 		
						card[i].speedType, 		
						card[i].arena);
			}
		}
	}
	printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n");

	printf("Again?: \n");
	printf("'1'\t: Yes\n");
	printf("'other'\t: No\n\n");
	scanf("\n%d", &answer);

	if (answer == 1){
		system("clear");
		main();
		return;
	}
	end();
}

/* Search by Rarity */
void searchRarity(){
	system("clear");
	printf("Card Rarity:");
	printf("[1] : Common");
	printf("[2] : Rare");
	printf("[3] : Epic");
	printf("[4] : Legendary");
	printf("'q' : Quit\n");
	scanf("%d",&input);

/*
	for(i=1; i<MAX; i++){
		if(input == 1){
			if(card[i].rarity = "Common    "){
				printCard();
			}
		}
		if(input == 2){
			if(card[i].rarity = "Rare      "){
				printCard();
			}
		}
		if(input == 3){
			if(card[i].rarity = "Epic      "){
				printCard();
			}
		}
		if(input == 4){
			if(card[i].rarity = "Legendary "){
				printCard();
			}
		}
	}
	*/
	
	end();

}

/* Search by Arena */
void searchArena(){
}

/* Search by Type */
void searchType(){
	system("clear");
	printf("Select the 'Type' you would like to search for\n");
	printf("[1]	:	Building\n");
	printf("[2]	:	Spell\n");
	printf("[3]	:	Troop\n");
	printf("[q]	: 	Quit\n\n");
	scanf("%d",&input);
/*
	if(input == 1){
		for (i=1; i<MAX; i++){
			while(card[i].type == "Building"){
				printf("%g\t%g\t%s\t%g\t%s\t%s\t%g\t\t%g\t%g\t\t%g\t\t%g\t\t%g\t\t%g\t%g\t%g\t%g\t%g\t\t%g\t\t%s\t%s\t%g\t%g\t%g\t%s\n", 		
					card[i].number,			card[i].level, 			card[i].name, 			card[i].elixirCost, 
					card[i].rarity, 		card[i].type, 			card[i].hitpoints,		card[i].count,
					card[i].spawnLevel,		card[i].spawnSpeed,		card[i].damageSecond,	card[i].areaDamage, 	
					card[i].crownDamage, 	card[i].deathDamage, 	card[i].hitSpeed, 		card[i].lifetime,		
					card[i].duration,		card[i].boost,			card[i].targets, 		card[i].speedType, 		 
					card[i].radius, 		card[i].range, 			card[i].deployTime,		card[i].arena);
			}
		}

	}

	if(input == 2){

	}

	if(input == 3){

	}
	*/
}
