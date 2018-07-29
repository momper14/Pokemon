#include "Pokemon.h"
#include <math.h>
#include <stdlib.h>

void calcStat(PokemonClass *pokemon, byte stat);

void clacStats(PokemonClass *pokemon){
	int i;
	for(i = 0; i < 6; i++){
		calcStat(pokemon, i);
	}
}


void calcStat(PokemonClass *pokemon, byte stat){
	byte x, y, basis, iv, level;
	ushort se = pokemon->ev[stat];
	basis = pokemon->base->stats[stat];
	iv = pokemon->iv[stat];
	level = pokemon->level;

	if(se == 0){
		x = 0;
	} else{
		//    2  _________
		//	   \/ ev - 1 | + 1
		// x = ----------------
		//			   4
		x = (byte) sqrt(se - 1);
		if(x < 255){
			x += 1;
		}
		x = x / 4;
	}

	if(stat == STAT_KP){
		y = level + 10;
	} else{
		y = 5;
	}

	// ((basis + iv) * 2 + x) * level
	// ------------------------------ + y
	//              100
	pokemon->stats[stat] = ((((basis + iv) * 2 + x) * level) / 100) + y;
}

void calcEXPNext(struct PokemonClass *pokemon){
	if(pokemon->level >= 100){
		pokemon->expNext = 0;
	} else{
		byte lvlNext = pokemon->level + 1;
		switch(pokemon->base->expTier){
			case EXP_T2:

				//  4*lvl³
				// -------
				//    5
				pokemon->expNext = (uint) (4 * pow(lvlNext, 3) / 5);
				break;

			case EXP_T3:

				// n³
				pokemon->expNext = (uint) (pow(lvlNext, 3));
				break;

			case EXP_T4:

				//  6
				// ---n³ - 15n² + 100n - 140
				//  5
				pokemon->expNext = (uint) ((6 * pow(lvlNext, 3)) / 5 - 15 * pow(lvlNext, 2) + 100 * lvlNext - 140);
				break;

			case EXP_T5:

				//  5
				// ---n³
				//  4
				pokemon->expNext = (uint) (((5 * pow(lvlNext, 3)) / 4));
				break;
		}
	}
}