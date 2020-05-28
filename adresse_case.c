#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.h"

int adresse_case(int *tableau_trie, int *tableau_original){
	int valeur_minimum = 0;
  valeur_minimum = tableau_trie[0];
	int i = 0;
	
	while(tableau_original[i] != valeur_minimum){
		i++;
	}
	return i;
}