#include "ClashRoyal.h"

/* End of File */
void end(){
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}


/* Places cards in alphabetical order */
void alpha(){
	for(i = 1; i < MAX-1;i++){
		for(j = i+1; j < MAX; j++){
			if(strcmp(card[i].name, card[j].name) > 0 ){
					temp    = card[i];
					card[i] = card[j];
					card[j] = temp;
			}
		}
	 }
}

/* takes the information of Cards in Arenas */
void takeCard(){
	takeCardArena0();
	takeCardArena1();
	takeCardArena2();
	takeCardArena3();
	takeCardArena4();
	takeCardArena5();	
}

void titleFull(){
	printf("\nNumber\tLevel\tName\t\t\tCost\tRarity\t\tType\t\tHitpoints\tCount\tSpawn Level\tSpawn Speed\tDamage Per Sec\tArea or Damage\tCrown\tDeath\tHit\tLifetime\tDuration\tBoost\tTarget Type\tSpeed\t\tRadius\tRange\tDeploy\tArena\n");
}