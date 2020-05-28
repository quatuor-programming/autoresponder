#include <stdio.h>
#include <stdlib.h>

//renvoie le nb de lignes dans un fichier

int file_line(FILE* fichier){
	int lines = 0, caractere = 0, fin = 0;
	long position = 0, position2 = 0;
	char chaine[200] = "";
	
	while(fin == 0){
		lines++;
		fgets(chaine, 200, fichier);
		position = ftell(fichier);
		fseek(fichier, 0, SEEK_END);
		position2 = ftell(fichier);
		
		if(position == position2){fin = 1;}
		else{fseek(fichier, position, SEEK_SET);}
	}
	
	return lines;
}