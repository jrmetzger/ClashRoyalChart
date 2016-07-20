#include "ClashRoyal.h"

/* Sorts by Name */
void sortName(){
	system("clear");
	printf("Sort by Alphabetical Order: \n");
	alpha();
	for(i=1;i<MAX;i++){
		printf("%g\t%g\t%s\t%g\t%s\t%s\t%g\t\t%g\t%g\t\t%g\t\t%g\t\t%g\t\t%g\t%g\t%g\t%g\t%g\t\t%g\t\t%s\t%s\t%g\t%g\t%g\t%s\n", 		
			card[i].number,			card[i].level, 			card[i].name, 			card[i].elixirCost, 
			card[i].rarity, 		card[i].type, 			card[i].hitpoints,		card[i].count,
			card[i].spawnLevel,		card[i].spawnSpeed,		card[i].damageSecond,	card[i].areaDamage, 	
			card[i].crownDamage, 	card[i].deathDamage, 	card[i].hitSpeed, 		card[i].lifetime,		
			card[i].duration,		card[i].boost,			card[i].targets, 		card[i].speedType, 		 
			card[i].radius, 		card[i].range, 			card[i].deployTime,		card[i].arena);
	}
	end();
}

/* Sorts by Elixir Cost */
void sortElixir(){
	system("clear");
 	printf("Sort by Elixir Cost: \n");

	for(i = 1; i < MAX;i++){
		for(j = i+1; j < MAX; j++){
			if(card[i].elixirCost > card[j].elixirCost){
					temp    = card[i];
					card[i] = card[j];
					card[j] = temp;
			}
		}
		printf("%g\t%g\t%s\t%g\t%s\t%s\t%g\t\t%g\t%g\t\t%g\t\t%g\t\t%g\t\t%g\t%g\t%g\t%g\t%g\t\t%g\t\t%s\t%s\t%g\t%g\t%g\t%s\n", 		
			card[i].number,			card[i].level, 			card[i].name, 			card[i].elixirCost, 
			card[i].rarity, 		card[i].type, 			card[i].hitpoints,		card[i].count,
			card[i].spawnLevel,		card[i].spawnSpeed,		card[i].damageSecond,	card[i].areaDamage, 	
			card[i].crownDamage, 	card[i].deathDamage, 	card[i].hitSpeed, 		card[i].lifetime,		
			card[i].duration,		card[i].boost,			card[i].targets, 		card[i].speedType, 		 
			card[i].radius, 		card[i].range, 			card[i].deployTime,		card[i].arena);
	}
	end();	 
}

/* Sorts by Rarity */
void sortRarity(){
	system("clear");
 	printf("\nSort by Rarity: \n");

	for(i = 1; i < MAX;i++){
		for(j = i+1; j < MAX; j++){
			if(strcmp(card[i].rarity, card[j].rarity) > 0 ){
					temp    = card[i];
					card[i] = card[j];
					card[j] = temp;
			}
		}
		printf("%g\t%g\t%s\t%g\t%s\t%s\t%g\t\t%g\t%g\t\t%g\t\t%g\t\t%g\t\t%g\t%g\t%g\t%g\t%g\t\t%g\t\t%s\t%s\t%g\t%g\t%g\t%s\n", 		
			card[i].number,			card[i].level, 			card[i].name, 			card[i].elixirCost, 
			card[i].rarity, 		card[i].type, 			card[i].hitpoints,		card[i].count,
			card[i].spawnLevel,		card[i].spawnSpeed,		card[i].damageSecond,	card[i].areaDamage, 	
			card[i].crownDamage, 	card[i].deathDamage, 	card[i].hitSpeed, 		card[i].lifetime,		
			card[i].duration,		card[i].boost,			card[i].targets, 		card[i].speedType, 		 
			card[i].radius, 		card[i].range, 			card[i].deployTime,		card[i].arena);
	}
	end();	 
}

/* Sorts by Arena */
void sortArena(){
 	system("clear");
 	printf("\nSort by Arena: \n");
 	titleFull();
	end();

	for(i = 1; i < MAX;i++){
		for(j = i+1; j < MAX; j++){
			if(strcmp(card[i].arena, card[j].arena) > 0){
				temp    = card[i];
				card[i] = card[j];
				card[j] = temp;
			}
		}
		printf("%g\t%g\t%s%g\t%s\t%s\t%g\t%g\t%g\t\t%g\t\t%g\t\t%g\t\t%g\t%g\t%g\t%g\t\t%g\t\t%g\t%s\t%s\t%g\t%g\t%g\t%s\n", 		
			card[i].number,			card[i].level, 			card[i].name, 			card[i].elixirCost, 
			card[i].rarity, 		card[i].type, 			card[i].hitpoints,		card[i].count,
			card[i].spawnLevel,		card[i].spawnSpeed,		card[i].damageSecond,	card[i].areaDamage, 	
			card[i].crownDamage, 	card[i].deathDamage, 	card[i].hitSpeed, 		card[i].lifetime,		
			card[i].duration,		card[i].boost,			card[i].targets, 		card[i].speedType, 		 
			card[i].radius, 		card[i].range, 			card[i].deployTime,		card[i].arena);
	}
	end();	 
}

/* Sorts by Type */
void sortType(){
 	system("clear");
 	printf("\nSort by Type: Building, Spell, Troop\n");
 	titleFull();
 	end();

	for(i = 1; i < MAX;i++){
		for(j = i+1; j < MAX; j++){
			if(strcmp(card[i].type, card[j].type) > 0 ){
					temp    = card[i];
					card[i] = card[j];
					card[j] = temp;
			
			}
		}
		printf("%g\t%g\t%s\t%g\t%s\t%s\t%g\t\t%g\t%g\t\t%g\t\t%g\t\t%g\t\t%g\t%g\t%g\t%g\t%g\t\t%g\t\t%s\t%s\t%g\t%g\t%g\t%s\n", 		
			card[i].number,			card[i].level, 			card[i].name, 			card[i].elixirCost, 
			card[i].rarity, 		card[i].type, 			card[i].hitpoints,		card[i].count,
			card[i].spawnLevel,		card[i].spawnSpeed,		card[i].damageSecond,	card[i].areaDamage, 	
			card[i].crownDamage, 	card[i].deathDamage, 	card[i].hitSpeed, 		card[i].lifetime,		
			card[i].duration,		card[i].boost,			card[i].targets, 		card[i].speedType, 		 
			card[i].radius, 		card[i].range, 			card[i].deployTime,		card[i].arena);	
	}
	end();
}