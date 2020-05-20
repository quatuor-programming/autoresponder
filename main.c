#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototypes.h"

int main() {
  printf("Bienvenue dans votre console autoresponder.\n        ---         \nCode by trio-programming\nEn attente d'une reponse.\n");
  char commande [70] = "";
  char reponse [150] = "";
  lire(commande, 70);
  
  return 0;
}

