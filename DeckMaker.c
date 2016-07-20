#include "ClashRoyal.h"


/* Deck Maker */
void deckMaker(){
	FILE *myFile;
	int deck, input[i], totElixir = 0;

	system("clear");
	printf("Welcome to Deck Maker, Select your Deck [1] [2] [3]:\n\n");

	printf("Card Deck: ");
	scanf("%d",&deck);

	if (deck == 1){
	    myFile = fopen("deck1.txt", "r");
	}

	if (deck == 2){
		myFile = fopen("deck2.txt", "r");
	}

	if (deck == 3){
		myFile = fopen("deck3.txt", "r");
	}

    if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }

    for (i = 0; i < 8; i++){
        fscanf(myFile, "%d,", &input[i]);
       	printf("%d\t%g\t%s\t\t%g\t%s\t%s\t%g\t\t%g\t%g\t%g\t%g\t%g\t%g\t%g\t\t%s\t%s\t%g\t%g\t%g\t%s\n", 		
			i, 						card[i].level, 			card[i].name, 			card[i].elixirCost, 
			card[i].rarity, 		card[i].type, 			card[i].hitpoints,		card[i].count,
			card[i].damageSecond,	card[i].areaDamage, 	card[i].crownDamage, 	card[i].hitSpeed, 	
			card[i].lifetime,		card[i].boost,			card[i].targets, 		card[i].speedType, 		 
			card[i].radius, 		card[i].range, 			card[i].deployTime,		card[i].arena);
    }
    
	int avgElixir = (totElixir / 8);

    printf("\nAverage Elixir Cost: %d\n", avgElixir);

    fclose(myFile);



	end();
}