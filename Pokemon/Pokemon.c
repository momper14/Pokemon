
#include "Base.h"
#include "attacks.h"
#include "Pokemon.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
	char in;

	const struct pokemonBase *pkm = pokemons[1];

	int i;
	for(i = 0; i < pkm->numLearnable; i++){
		int tmpi = pkm->learnables[i].lvl;
		char *tmps = pkm->learnables[i].attacke->name;
		printf("%d, %s\n", tmpi, tmps);
	}
		
	scanf_s("%c", &in, 1);

	return 0;
}


