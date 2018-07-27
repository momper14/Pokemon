#include "Types.h"

const double matrix[18][18] = {
	//            Normal		Kampf			Flug			Gift			Boden			Stein			K�fer			Geist			Stahl			Feuer			Wasser			Pflanze			Elektro			Psycho			Eis				Drache			Unlicht				Kein Typ
	/* Normal*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_IMMUN	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Kampf*/	 {EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_IMMUN	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_SEHR		,EFFEKT_NORM },
	/* Flug*/	 {EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Gift*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_IMMUN	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Boden*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_IMMUN	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Gestein*/ {EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM		,EFFEKT_NORM },
	/* K�fer*/	 {EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR		,EFFEKT_NORM },
	/* Geist*/	 {EFFEKT_IMMUN	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT		,EFFEKT_NORM },
	/* Stahl*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Feuer*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Wasser*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Pflanze*/ {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Elektro*/ {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_IMMUN	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Psycho*/	 {EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_IMMUN		,EFFEKT_NORM },
	/* Eis*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_SEHR	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Drache*/	 {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM		,EFFEKT_NORM },
	/* Unlicht*/ {EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NICHT	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_SEHR	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NICHT		,EFFEKT_NORM },

	/* Kein Typ*/{EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM    ,EFFEKT_NORM    ,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM	,EFFEKT_NORM		,EFFEKT_NORM }

};

unsigned long getMultiplikator(int attackType, int defenseType1, int defenseType2, unsigned long *damage){
	/*
		Bei EFFEKT_SEHR wird << 1 geshiftet
		Bei EFFEKT_NORM wird <<0 geshiftet
		Bei EFFEKT_NICHT wird >>1 geshiftet
		Bei EFFEKT_IMMUN wird damage auf 0 gesetzt und zur�ckgegeben
	*/


	// Ersten Typen vergleichen
	char effektivitaet = EFFEKT_NORM;

	if (matrix[attackType][defenseType1]== EFFEKT_IMMUN) {
		// Direktes Beenden der Methode, weil keine weiteren Rechnungen notwendig sind
		//printf("Es hat keine Wirkung");
		return 0;
	}
	else if (matrix[attackType][defenseType1] == EFFEKT_NICHT) {
		damage = *damage >> 1;
		effektivitaet = EFFEKT_NICHT;
	}
	else if (matrix[attackType][defenseType1] == EFFEKT_SEHR) {
		damage = *damage << 1;
		effektivitaet = EFFEKT_SEHR;
	}
	else {
		effektivitaet = EFFEKT_NORM;
	}

	// Zweiten Typen vergleichen
	if (matrix[attackType][defenseType2] == EFFEKT_IMMUN) {
		// Direktes Beenden der Methode, weil keine weiteren Rechnungen notwendig sind
		//printf("Es hat keine Wirkung");
		return 0;
	}
	else if (matrix[attackType][defenseType2] == EFFEKT_NICHT) {
		damage = *damage >> 1;
		effektivitaet += EFFEKT_NICHT;
	}
	else if (matrix[attackType][defenseType2] == EFFEKT_SEHR) {
		damage = *damage << 1;
		effektivitaet += EFFEKT_SEHR;
	}
	else {
		effektivitaet += EFFEKT_NORM;
	}

	/*
		EFFEKT_SEHR  = 3
		EFFEKT_NORM  = 2
		EFFEKT_NICHT = 1
		EFFEKT_IMMUN = 0
	
		EFFEKT_SEHR  + EFFEKT_SEHR  = 6 ->   4-Fach Schaden
		EFFEKT_NORM  + EFFEKT_SEHR  = 5 ->   2-Fach Schaden
		EFFEKT_NORM  + EFFEKT_NORM  = 4 ->   1-Fach Schaden
		EFFEKT_SEHR  + EFFEKT_NICHT = 4 ->   1-Fach Schaden
		EFFEKT_NICHT + EFFEKT_NORM  = 3 -> 1/2-Fach Schaden
		EFFEKT_NICHT + EFFEKT_NICHT = 2 -> 1/4-Fach Schaden

		Dieser Effekt enstehst beim obigem Shiften automatisch und muss nicht weiter beaufsichtigt werden
	*/

	// Ausgabe f�r die Effektivit�t
	if (effektivitaet == 6) {
		//printf("4-Fach effektivit�t !");	
	}
	else if (effektivitaet == 5) {
		//printf("Es ist sehr effektiv !");
	}
	else if (effektivitaet == 4) {
		
	}
	else if (effektivitaet == 3) {
		//printf("Es ist nicht sehr effektiv !");
	}
	else if(effektivitaet == 2) {
		//printf("4-Fach Resistenz !");
	}

	return effektivitaet;
	


}