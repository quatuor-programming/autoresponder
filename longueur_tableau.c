#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"

//Calcule la longueur d'un tableau initilisé avec des 'a' aux endroits vides

int longueur_tableau (int *tableau){
	int longueur_tableau = 0, i = 0;
	char caractere = 0;
	
	while(caractere != 'a' || caractere != 'A'){
		caractere = tableau[i];
		i++;
	}
	
	longueur_tableau = i + 1;
	
	return longueur_tableau;
}
