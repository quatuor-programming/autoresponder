#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototypes.h"

int main() {
  printf("Bienvenue dans votre console autoresponder.\n        ---         \nCode by trio-programming\nEn attente d'une reponse.\n \Ecrivez close pour fermer.\n");

  FILE* fichier = NULL;
  fichier = fopen("reponses.bot", "r");
  if(fichier == NULL){printf("error main.c"); exit(0);}

  char commande [150] = "";
  char reponse[200] = "";
  int ligne = 0;
  int rep_line = 0;
  int fin = 0;

  do{
  ligne = 0;

  lire(commande, 150);

  if(commande[0] == 'c' && commande[1] == 'l' && commande[2] == 'o' && commande[3] == 's' && commande[4] == 'e'){exit(0);}

  if(commande[0] == '!'){admin(commande);}

  rep_line = computing(commande);

  rewind(fichier);

  if(rep_line == 0){fgets(reponse, 200, fichier);}


  while(rep_line > 0){
	  fgets(reponse, 200, fichier);
	  rep_line--;
  }

  printf("%s", reponse);

  }while(fin == 0);

  fclose(fichier);

  return 0;
}
