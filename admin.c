#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "prototypes.h"

void admin(char *commande){
	char cmd1[] = "!add", question[150] = {0}, reponse[200] = {0};
	int i = 0;
  char rep_final = 0;
  FILE* fichier_q = NULL;
  FILE* fichier_r = NULL;
  fichier_q = fopen("questions.bot", "a");
	fichier_r = fopen("reponses.bot", "a");

	if (strcmp(cmd1, commande) == 0) // Si chaînes identiques
    {
        printf("Menu d'ajout de questions/reponses\n");
		printf("Entrez une question \n");
		lire(question, 150);
		printf("Entrez sa reponse\n");
		lire(reponse, 200);
		printf("Traitement des chaines...");

		for (i=0 ; i<strlen(question); i++) {
		question[i]=tolower(question[i]);}

		for (i=0 ; i<strlen(reponse) ; i++) {
		reponse[i]=tolower(reponse[i]);}

		printf("Relisez-vous : Votre question \n %s \n Sa reponse : \n %s \n Cela vous convient-il ? \n 1 = oui 0 = non\n", question, reponse);
		scanf("%d", &rep_final);
		if(rep_final == 1){
			if(fichier_q == NULL || fichier_r == NULL){printf("error admin.c"); exit(0);}

			i=0;

			while(question[i] != 0){fputc(question[i], fichier_q); i++;}
			i=0;
			fprintf(fichier_q, "\n");
			while(reponse[i] != 0){fputc(question[i], fichier_r); i++;}
			i=0;
			fprintf(fichier_r, "\n");
            printf("Operation reussie !");
		}
		else{printf("Operation annulee.");}
    }
    else
    {
        printf("Commande invalide\n");
    }
	fclose(fichier_r);
	fclose(fichier_q);
}
