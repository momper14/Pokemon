
#include "Base.h"
#include "attacks.h"
#include "Pokemon.h"
#include "types.h"
#include <stdio.h>


int main(){
	char in;

	int i;
	for(i = 1; i <= 151; i++){
		uint tmp = pokemons[i]->natDex;
		if(tmp <  10) printf("0");
		if(tmp < 100) printf("0");

		printf("%d", tmp);
		printf(", %s", pokemons[i]->name);
		printf(", KP: %d", pokemons[i]->stats[kp]);
		printf(", Init: %d", pokemons[i]->stats[initiative]);
		printf("\n");
	}
	
	scanf_s("%c", &in, 1);

	return 0;
}


