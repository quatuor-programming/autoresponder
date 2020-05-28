#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototypes.h"

//Renvoie un int avec le nombre de differences sur une ligne de fichier

int differences(char *question, FILE* questions){

	int differences = 0, longueur_chaine = 0, i = 0;
    int ii = 0;
    int caractere = 0, fin = 0; //Declare les variables
	longueur_chaine = strlen(question); //calcule la longueur de la chaine


	for(i = 0 ; i < longueur_chaine ; i++){
		while(fin == 0){
			caractere = fgetc(questions);
			if(caractere == '\n'){fin = 1;} //On verifie que ce n'est pas un saut de ligne
            printf("Differences active %c\n", caractere);
			while(caractere != '\n'){
			caractere = fgetc(questions);
			if(caractere != question[ii]){differences++;}}
		}
	}

	return differences;
}
