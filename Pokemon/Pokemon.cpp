
#include "Base.h"
#include <stdio.h>


int main(){
	char in;

	int i;
	for(i = 1; i <= 151; i++){
		uint tmp = pokemons[i]->natDex;
		if(tmp < 010) printf("0");
		if(tmp < 100) printf("0");

		printf("%d\n", tmp);
	}
	
	scanf_s("%c", &in, 1);

	return 0;
}


