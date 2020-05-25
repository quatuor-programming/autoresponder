#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void computing (*question, *reponse){
  FILE* fichier_rep = NULL;
  
  fichier_rep = fopen("file1.reply", "w");
  if(fichier_rep != NULL){fclose(fichier_rep);
  else{printf("error"); exit(0);}
  
  
}
