#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototypes.h"

//Renvoie le numero de ligne avec la question la plus semblable à celle de l'utilisateur

int computing(char *question){
	FILE* fichier = NULL;

	int question_line = 0, i = 0, caractere = 0, Differences = 0;
	int differences_tableau[200] = {0};
	int differences_croissant[200] = {0};
	int fileline = 0;

	fichier = fopen("questions.bot", "r");
	if(fichier == NULL){printf("Error dans computing.c"); exit(0);}


	fileline = file_line(fichier);


	for(i = 0 ; i < fileline ; i++){
        printf("entrée 1");
		Differences = differences(question, fichier);
		differences_tableau[i] = Differences;
	}


	for(i=0 ; i<200 ; i++){differences_croissant[i] = differences_tableau[i];}

	trieur(differences_croissant, 200);
	question_line = adresse_case(differences_croissant, differences_tableau);


	fclose(fichier);
	return question_line;
}
