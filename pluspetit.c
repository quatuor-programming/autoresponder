#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.h"

//Cette fonction renvoie la position de la plus petite valeur d'un tableau donné. Si plusieurs égaux, renvoie hasard

void trieur(int tableau[], int tailleTableau){
    long i = 0, j = 0, temp = 0;
   
    for(i = 0; i < tailleTableau; i++)
    {
   
        for(j = 0; j < tailleTableau + 2; j++)
        {
            if(tableau[j] > tableau[j + 1])
            {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
                temp =  0;
            }
        }
    }
}
