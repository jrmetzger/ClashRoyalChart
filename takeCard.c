#include "ClashRoyal.h"

/* Variables */
char* null = "----     ";

/* Rarity */
char* c = "Common   ";
char* r = "Rare     ";
char* e = "Epic     ";
char* l = "Legendary";

/* Arena */
char* a0 = "(Arena 0) Training Camp         ";
char* a1 = "(Arena 1) Goblin Stadium        ";
char* a2 = "(Arena 2) Bone Pit              ";
char* a3 = "(Arena 3) Barbarian Bowl        ";
char* a4 = "(Arena 4) P.E.E.k.A's Playground";
char* a5 = "(Arena 5) Spell Valley          ";
char* a6 = "(Arena 6) Builder's Workshop    ";
char* a7 = "(Arena 7) Royal Arena           ";
char* a8 = "(Arena 8) Legendary Arena       ";

/* Type */
char* s = "Spell   ";
char* t = "Troop   ";
char* b = "Building";

/* Targets */
char* a = "Air          ";
char* g = "Ground       ";
char* bo = "Air & Ground";

/* Speed */
char* sl = "Slow    ";
char* m = "Medium   ";
char* f = "Fast     ";
char* v = "Very Fast";


/* takes the information of Arena0 */
void takeCardArena0(){

	for(i = 1; i < MAX; i++){
		card[i].number = i;
	}
	
	for(i = 1; i < 13; i++){
		strcpy(card[i].arena, a0);
	}

			card[1].level = 		8;
	strcpy(	card[1].name, 			"Arrows      	");
			card[1].elixirCost = 	3;
	strcpy(	card[1].rarity, 		c);
	strcpy(	card[1].type, 			s);
	strcpy(	card[1].targets, 		bo);
	strcpy(	card[1].speedType, 		null);
			card[1].areaDamage = 	221;
			card[1].crownDamage = 	89;
			card[1].radius = 		4;

			card[2].level = 		8;
	strcpy(	card[2].name, 			"Bombers       	");
			card[2].elixirCost = 	3;
	strcpy(	card[2].rarity, 		c);
	strcpy(	card[2].type, 			t);
			card[2].hitpoints = 	289;
			card[2].damageSecond = 	111;
			card[2].areaDamage = 	212;
			card[2].hitSpeed = 		1.9;
	strcpy(	card[2].targets, 		g);
	strcpy(	card[2].speedType, 		m);	
			card[2].range = 		4.5;
			card[2].deployTime = 	1;

			card[3].level = 		7;
	strcpy(	card[3].name, 			"Archers      	");
			card[3].elixirCost = 	3;
	strcpy(	card[3].rarity, 		c);
	strcpy(	card[3].type, 			t);
			card[3].hitpoints = 	220;
			card[3].damageSecond = 	58;
			card[3].areaDamage = 	70;
			card[3].hitSpeed = 		1.2;
	strcpy(	card[3].targets, 		bo);
	strcpy(	card[3].speedType, 		m);
			card[3].range = 		5;
			card[3].deployTime = 	1;
			card[3].count = 		2;

			card[4].level = 		7;
	strcpy(	card[4].name, 			"Knight    	");
			card[4].elixirCost = 	3;
	strcpy(	card[4].rarity, 		c);
	strcpy(	card[4].type, 			t);
			card[4].hitpoints = 	1161;
			card[4].damageSecond = 	120;
			card[4].areaDamage = 	132;
			card[4].hitSpeed = 		1.1;
	strcpy(	card[4].targets, 		g);
	strcpy(	card[4].speedType, 		m);
			card[4].deployTime = 	1;

			card[5].level = 		5;
	strcpy(	card[5].name, 			"Fire Ball 	");
			card[5].elixirCost = 	4;
	strcpy(	card[5].rarity, 		r);
	strcpy(	card[5].type, 			s);
			card[5].areaDamage = 	474;
			card[5].crownDamage = 	190;
	strcpy(	card[5].targets, 		bo);
	strcpy(	card[5].speedType, 		null);
			card[5].radius = 		2.5;

			card[6].level = 		6;
	strcpy(	card[6].name, 			"Mini P.e.e.k.a  ");
			card[6].elixirCost = 	4;
	strcpy(	card[6].rarity, 		r);
	strcpy(	card[6].type, 			t);
			card[6].hitpoints = 	960;
			card[6].damageSecond = 	288;
			card[6].areaDamage = 	520;
			card[6].hitSpeed = 		1.8;
	strcpy(	card[6].targets, 		g);
	strcpy(	card[6].speedType, 		f);
			card[6].deployTime = 	1;

			card[7].level = 		5;
	strcpy(	card[7].name, 			"Musketeer  	");
			card[7].elixirCost = 	4;
	strcpy(	card[7].rarity, 		r);
	strcpy(	card[7].type, 			t);
			card[7].hitpoints = 	496;
			card[7].damageSecond = 	132;
			card[7].areaDamage = 	146;
			card[7].hitSpeed = 		1.1;
	strcpy(	card[7].targets,		bo);
	strcpy(	card[7].speedType, 		m);
			card[7].range = 		6;
			card[7].deployTime = 	1;

			card[8].level = 		5;
	strcpy(	card[8].name, 			"Giant 	  	");
			card[8].elixirCost = 	5;
	strcpy(	card[8].rarity, 		r);
	strcpy(	card[8].type, 			t);
			card[8].hitpoints = 	2920;
			card[8].damageSecond = 	122;
			card[8].areaDamage = 	183;
			card[8].hitSpeed = 		1.5;
	strcpy(	card[8].targets,		b);
	strcpy(	card[8].speedType, 		sl);
			card[8].deployTime = 	1;

			card[9].level = 		2;
	strcpy(	card[9].name, 			"Prince  	");
			card[9].elixirCost = 	5;
	strcpy(	card[9].rarity, 		e);
	strcpy(	card[9].type, 			t);
			card[9].hitpoints = 	1210;
			card[9].damageSecond = 	176;
			card[9].boost =			200;
			card[9].areaDamage = 	264;
			card[9].hitSpeed = 		1.5;
	strcpy(	card[9].targets,		g);
	strcpy(	card[9].speedType, 		m);
			card[9].deployTime = 	1;

			card[10].level = 		3;
	strcpy(	card[10].name, 			"Baby Dragon   	");
			card[10].elixirCost = 	4;
	strcpy(	card[10].rarity, 		e);
	strcpy(	card[10].type, 			t);
			card[10].hitpoints = 	968;
			card[10].damageSecond = 67;
			card[10].areaDamage = 	121;
			card[10].hitSpeed = 	1.8;
	strcpy(	card[10].targets,		bo);
	strcpy(	card[10].speedType, 	f);
			card[10].range = 		3;
			card[10].deployTime = 	1;

			card[11].level = 		2;
	strcpy(	card[11].name, 			"Skeleton Army 	");
			card[11].elixirCost = 	4;
	strcpy(	card[11].rarity, 		e);
	strcpy(	card[11].type, 			t);
			card[11].hitpoints = 	35;
			card[11].damageSecond = 35;
			card[11].areaDamage = 	35;
			card[11].hitSpeed = 	1;
	strcpy(	card[11].targets,		g);
	strcpy(	card[11].speedType, 	f);
			card[11].deployTime = 	1;
			card[11].count =		21;

			card[12].level = 		2;
	strcpy(	card[12].name, 			"Witch 		");
			card[12].elixirCost = 	5;
	strcpy(	card[12].rarity, 		e);
	strcpy(	card[12].type, 			t);
			card[12].hitpoints = 	550;
			card[12].damageSecond = 75;
			card[12].areaDamage = 	53;
			card[12].hitSpeed = 	0.7;
	strcpy(	card[12].targets,		bo);
	strcpy(	card[12].speedType, 	m);
			card[12].range = 		5;
			card[12].deployTime = 	1;
			card[12].spawnLevel =	7;
			card[15].spawnSpeed =	7.5;
}

/* takes the information of Arena1 */
void takeCardArena1(){

	for(i = 13; i < 19; i++){
		strcpy(card[i].arena, a1);
	}

			card[13].level = 		8;
	strcpy(	card[13].name, 			"Spear Goblins   ");
			card[13].elixirCost = 	2;
	strcpy(	card[13].rarity, 		c);
	strcpy(	card[13].type, 			t);
			card[13].hitpoints = 	100;
			card[13].damageSecond = 35;
			card[13].areaDamage = 	46;
			card[13].hitSpeed = 	1.3;
	strcpy(	card[13].targets,		bo);
	strcpy(	card[13].speedType, 	v);
			card[13].range = 		5;
			card[13].deployTime = 	1;
			card[13].count =		3;

			card[14].level = 		7;
	strcpy(	card[14].name, 			"Goblins    	");
			card[14].elixirCost = 	2;
	strcpy(	card[14].rarity, 		c);
	strcpy(	card[14].type, 			t);
			card[14].hitpoints = 	140;
			card[14].damageSecond = 80;
			card[14].areaDamage = 	88;
			card[14].hitSpeed = 	1.1;
	strcpy(	card[14].targets,		g);
	strcpy(	card[14].speedType, 	v);
			card[14].deployTime = 	1;
			card[14].count =		3;


			card[15].level = 		6;
	strcpy(	card[15].name, 			"Goblin Hut	");
			card[15].elixirCost = 	5;
	strcpy(	card[15].rarity, 		r);
	strcpy(	card[15].type, 			b);
			card[15].hitpoints = 	1120;
	strcpy(	card[15].targets,		null);
	strcpy(	card[15].speedType, 	null);
			card[15].lifetime =		60;
			card[15].deployTime = 	1;
			card[15].spawnLevel =	8;
			card[15].spawnSpeed =	4.9;


			card[16].level = 		5;
	strcpy(	card[16].name, 			"Valkyrie  	");
			card[16].elixirCost = 	4;
	strcpy(	card[16].rarity, 		r);
	strcpy(	card[16].type, 			t);
			card[16].hitpoints = 	1284;
			card[16].damageSecond = 116;
			card[16].areaDamage = 	175;
			card[16].hitSpeed = 	1.5;
	strcpy(	card[16].targets,		g);
	strcpy(	card[16].speedType, 	m);
			card[16].deployTime = 	1;

			card[17].level = 		2;
	strcpy(	card[17].name, 			"Lightning	");
			card[17].elixirCost = 	6;
	strcpy(	card[17].rarity, 		e);
	strcpy(	card[17].type, 			s);
	strcpy(	card[17].targets, 		bo);
	strcpy(	card[17].speedType, 	null);
			card[17].areaDamage = 	715;
			card[17].crownDamage = 	286;
			card[17].radius = 		3.5;
			card[17].count =		3;

			card[18].level = 		2;
	strcpy(	card[18].name, 			"Goblin Barrel	");
			card[18].elixirCost = 	3;
	strcpy(	card[18].rarity, 		e);
	strcpy(	card[18].type, 			s);
	strcpy(	card[18].targets, 		g);
	strcpy(	card[18].speedType, 	null);
			card[18].radius = 		1.5;
			card[18].count =		3;
			card[18].spawnLevel =	7;
}


/* takes the information of Arena2 */
void takeCardArena2(){

	for(i = 19; i < 25; i++){
		strcpy(card[i].arena, a2);
	}

			card[19].level = 		7;
	strcpy(	card[19].name, 			"Skeleton 	");
			card[19].elixirCost = 	1;
	strcpy(	card[19].rarity, 		c);
	strcpy(	card[19].type, 			t);
			card[19].hitpoints = 	56;
			card[19].damageSecond = 56;
			card[19].areaDamage = 	56;
			card[19].hitSpeed = 	1;
	strcpy(	card[19].targets,		g);
	strcpy(	card[19].speedType, 	f);
			card[19].deployTime = 	1;
			card[19].count =		3;

			card[20].level = 		8;
	strcpy(	card[20].name, 			"Minions		");
			card[20].elixirCost = 	3;
	strcpy(	card[20].rarity, 		c);
	strcpy(	card[20].type, 			t);
			card[20].hitpoints = 	173;
			card[20].damageSecond = 77;
			card[20].areaDamage = 	77;
			card[20].hitSpeed = 	1;
	strcpy(	card[20].targets,		bo);
	strcpy(	card[20].speedType, 	f);
			card[20].range =		2;
			card[20].deployTime = 	1;
			card[20].count =		3;

			card[21].level = 		5;
	strcpy(	card[21].name, 			"Tombstone	");
			card[21].elixirCost = 	3;
	strcpy(	card[21].rarity, 		r);
	strcpy(	card[21].type, 			b);
			card[21].hitpoints = 	350;
			card[21].spawnLevel =	7;
			card[21].spawnSpeed =	2.9;
	strcpy(	card[21].targets,		null);
	strcpy(	card[21].speedType, 	null);
			card[21].deployTime = 	1;
			card[21].lifetime =		40;

			card[22].level = 		5;
	strcpy(	card[22].name, 			"Bomb Tower	");
			card[22].elixirCost = 	5;
	strcpy(	card[22].rarity, 		r);
	strcpy(	card[22].type, 			b);
			card[22].hitpoints = 	1387;
			card[22].damageSecond = 91;
			card[22].areaDamage = 	146;
			card[22].hitSpeed = 	1.6;
	strcpy(	card[22].targets,		g);
	strcpy(	card[22].speedType, 	null);
			card[22].range =		6;
			card[22].deployTime = 	1;
			card[22].lifetime =		40;

			card[23].level = 		2;
	strcpy(	card[23].name, 			"Skeleton Giant	");
			card[23].elixirCost = 	6;
	strcpy(	card[23].rarity, 		e);
	strcpy(	card[23].type, 			t);
			card[23].hitpoints = 	2200;
			card[23].damageSecond = 88;
			card[23].areaDamage = 	132;
			card[23].deathDamage =	792;
			card[23].hitSpeed = 	1.5;
	strcpy(	card[23].targets,		g);
	strcpy(	card[23].speedType, 	m);
			card[23].deployTime = 	1;

			card[24].level = 		2;
	strcpy(	card[24].name, 			"Balloon		");
			card[24].elixirCost = 	5;
	strcpy(	card[24].rarity, 		e);
	strcpy(	card[24].type, 			t);
			card[24].hitpoints = 	1155;
			card[24].damageSecond = 220;
			card[24].areaDamage = 	660;
			card[24].deathDamage =	110;
			card[24].hitSpeed = 	3;
	strcpy(	card[24].targets,		b);
	strcpy(	card[24].speedType, 	m);
			card[24].deployTime = 	1;
}

/* takes the information of Arena3 */
void takeCardArena3(){

	for(i = 25; i < 31; i++){
		strcpy(card[i].arena, a3);
	}

			card[25].level = 		7;
	strcpy(	card[25].name, 			"Cannon		");
			card[25].elixirCost = 	3;
	strcpy(	card[25].rarity, 		c);
	strcpy(	card[25].type, 			b);
			card[25].hitpoints = 	616;
			card[25].damageSecond = 131;
			card[25].areaDamage = 	105;
			card[25].hitSpeed = 	0.8;
	strcpy(	card[25].targets,		g);
	strcpy(	card[25].speedType, 	null);
			card[25].range =		5.5;
			card[25].deployTime = 	1;
			card[25].lifetime =		30;

			card[26].level = 		8;
	strcpy(	card[26].name, 			"Barbarians	");
			card[26].elixirCost = 	5;
	strcpy(	card[26].rarity, 		c);
	strcpy(	card[26].type, 			t);
			card[26].hitpoints = 	579;
			card[26].damageSecond = 96;
			card[26].areaDamage = 	144;
			card[26].hitSpeed = 	1.5;
	strcpy(	card[26].targets,		g);
	strcpy(	card[26].speedType, 	m);
			card[26].deployTime = 	1;
			card[26].count =		4;

			card[27].level = 		5;
	strcpy(	card[27].name, 			"Rocket		");
			card[27].elixirCost = 	6;
	strcpy(	card[27].rarity, 		r);
	strcpy(	card[27].type, 			s);
			card[27].hitpoints = 	1022;
			card[27].damageSecond = 409;
	strcpy(	card[27].targets,		bo);
	strcpy(	card[27].speedType, 	null);
			card[27].radius =		2;

			card[28].level = 		5;
	strcpy(	card[28].name, 			"Barbarian Hut	");
			card[28].elixirCost = 	7;
	strcpy(	card[28].rarity, 		r);
	strcpy(	card[28].type, 			b);
			card[28].hitpoints = 	1606;
			card[28].spawnLevel	=	7;
			card[28].spawnSpeed =	14;
	strcpy(	card[28].targets,		null);
	strcpy(	card[28].speedType, 	null);
			card[28].deployTime = 	1;
			card[28].lifetime =		60;

			card[29].level = 		3;
	strcpy(	card[29].name, 			"Rage Spell	");
			card[29].elixirCost = 	3;
	strcpy(	card[29].rarity, 		e);
	strcpy(	card[29].type, 			s);
			card[29].boost=			140;
			card[29].duration =		9;
	strcpy(	card[29].targets,		bo);
	strcpy(	card[29].speedType, 	null);
			card[29].radius =		5;

			card[30].level = 		1;
	strcpy(	card[30].name, 			"X-Bow		");
			card[30].elixirCost = 	6;
	strcpy(	card[30].rarity, 		e);
	strcpy(	card[30].type, 			b);
			card[30].hitpoints = 	1000;
			card[30].damageSecond = 66;
			card[30].areaDamage = 	20;
			card[30].hitSpeed = 	0.3;
	strcpy(	card[30].targets,		g);
	strcpy(	card[30].speedType, 	null);
			card[30].range =		11.5;
			card[30].deployTime = 	4;
			card[30].lifetime =		40;
}

/* takes the information of Arena4 */
void takeCardArena4(){

	for(i = 31; i < 38; i++){
		strcpy(card[i].arena, a4);
	}

			card[31].level = 		7;
	strcpy(	card[31].name, 			"Tesla		");
			card[31].elixirCost = 	4;
	strcpy(	card[31].rarity, 		c);
	strcpy(	card[31].type, 			b);
			card[31].hitpoints = 	692;
			card[31].damageSecond = 140;
			card[31].areaDamage = 	112;
			card[31].hitSpeed = 	0.8;
	strcpy(	card[31].targets,		bo);
	strcpy(	card[31].speedType, 	null);
			card[31].range =		5.5;
			card[31].deployTime = 	1;
			card[31].lifetime =		40;

			card[32].level = 		8;
	strcpy(	card[32].name, 			"Minion Horde	");
			card[32].elixirCost = 	5;
	strcpy(	card[32].rarity, 		c);
	strcpy(	card[32].type, 			t);
			card[32].hitpoints = 	173;
			card[32].damageSecond = 77;
			card[32].areaDamage = 	77;
			card[32].hitSpeed = 	1;
	strcpy(	card[32].targets,		bo);
	strcpy(	card[32].speedType, 	f);
			card[32].range =		2;
			card[32].deployTime = 	1;
			card[32].count =		6;

			card[33].level = 		5;
	strcpy(	card[33].name, 			"Inferno Tower	");
			card[33].elixirCost = 	5;
	strcpy(	card[33].rarity, 		r);
	strcpy(	card[33].type, 			b);
			card[33].hitpoints = 	1241;
			card[33].damageSecond = 72.1460;
			card[33].areaDamage = 	29.584;
			card[33].hitSpeed = 	0.4;
	strcpy(	card[33].targets,		bo);
	strcpy(	card[33].speedType, 	null);
			card[33].range =		6;
			card[33].deployTime = 	1;
			card[33].lifetime =		40;


			card[34].level = 		5;
	strcpy(	card[34].name, 			"Hog Rider	");
			card[34].elixirCost = 	4;
	strcpy(	card[34].rarity, 		r);
	strcpy(	card[34].type, 			t);
			card[34].hitpoints = 	1168;
			card[34].damageSecond = 146;
			card[34].areaDamage = 	219;
			card[34].hitSpeed = 	1.5;
	strcpy(	card[34].targets,		b);
	strcpy(	card[34].speedType, 	v);
			card[34].deployTime = 	1;

			card[35].level = 		2;
	strcpy(	card[35].name, 			"Freeze Spell	");
			card[35].elixirCost = 	4;
	strcpy(	card[35].rarity, 		e);
	strcpy(	card[35].type, 			s);
			card[35].duration =		4.3;
	strcpy(	card[35].targets,		bo);
	strcpy(	card[35].speedType, 	null);
			card[35].radius = 		3;

			card[36].level = 		1;
	strcpy(	card[36].name, 			"P.e.e.k.a	");
			card[36].elixirCost = 	7;
	strcpy(	card[36].rarity, 		e);
	strcpy(	card[36].type, 			t);
			card[36].hitpoints = 	2600;
			card[36].damageSecond = 269;
			card[36].areaDamage = 	485;
			card[36].hitSpeed = 	1.8;
	strcpy(	card[36].targets,		g);
	strcpy(	card[36].speedType, 	sl);
			card[36].deployTime = 	3;

			card[37].level = 		1;
	strcpy(	card[37].name, 			"* Lava Hound	");
			card[37].elixirCost = 	7;
	strcpy(	card[37].rarity, 		l);
	strcpy(	card[37].type, 			t);
			card[37].hitpoints = 	3000;
			card[37].damageSecond = 34;
			card[37].areaDamage = 	45;
			card[37].spawnLevel =	1;
			card[37].hitSpeed = 	1.3;
	strcpy(	card[37].targets,		bo);
	strcpy(	card[37].speedType, 	sl);
			card[37].range =		2;
			card[37].deployTime = 	1;
}

/* takes the information of Arena5 */
void takeCardArena5(){

	for(i = 38; i < 45; i++){
		strcpy(card[i].arena, a5);
	}

			card[38].level = 		6;
	strcpy(	card[38].name, 			"Zap		");
			card[38].elixirCost = 	2;
	strcpy(	card[38].rarity, 		c);
	strcpy(	card[38].type, 			s);
			card[38].areaDamage = 	128;
			card[38].crownDamage =	52;
	strcpy(	card[38].targets,		bo);
	strcpy(	card[38].speedType, 	null);
			card[38].duration =		1;
			card[38].radius =		2.5;

			card[39].level = 		7;
	strcpy(	card[39].name, 			"Fire Spirits	");
			card[39].elixirCost = 	2;
	strcpy(	card[39].rarity, 		c);
	strcpy(	card[39].type, 			t);
			card[39].hitpoints = 	75;
			card[39].areaDamage = 	140;
	strcpy(	card[39].targets,		bo);
	strcpy(	card[39].speedType, 	v);
			card[39].range =		2;
			card[39].deployTime = 	1;
			card[39].count =		3;

			card[40].level = 		3;
	strcpy(	card[40].name, 			"Furnace		");
			card[40].elixirCost = 	4;
	strcpy(	card[40].rarity, 		r);
	strcpy(	card[40].type, 			b);
			card[40].hitpoints = 	726;
			card[40].spawnLevel = 	5;
			card[40].spawnSpeed =	10;
	strcpy(	card[40].targets,		null);
	strcpy(	card[40].speedType, 	null);
			card[40].deployTime = 	1;
			card[40].lifetime =		50;

			card[41].level = 		4;
	strcpy(	card[41].name, 			"Wizard		");
			card[41].elixirCost = 	5;
	strcpy(	card[41].rarity, 		r);
	strcpy(	card[41].type, 			t);
			card[41].hitpoints = 	452;
			card[41].damageSecond = 107;
			card[41].areaDamage = 	172;
			card[41].hitSpeed = 	1.6;
	strcpy(	card[41].targets,		bo);
	strcpy(	card[41].speedType, 	m);
			card[41].range =		5;
			card[41].deployTime = 	1;

	//strcpy(card[42].name, "* Poison    	");

	//strcpy(card[43].name, "* Mirror    	");

	//strcpy(card[44].name, "* Ice Wizard   	");
	
	
}