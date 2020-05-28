#ifndef DEF_PROTOTYPES
#define DEF_PROTOTYPES

int lire(char *chaine, int longueur); //lis une chaine de caractere
void viderBuffer(); //vide le buffer
int computing(char *question); //Renvoie le numero de ligne avec la question la plus semblable à celle de l'utilisateur
int differences(char *question, FILE* questions); //Renvoie un int avec le nombre de differences sur une ligne de fichier
int file_line(FILE* fichier); //renvoie le nb de lignes dans un fichier
int longueur_tableau (int *tableau); //Calcule la longueur d'un tableau initilisé avec des 'a' aux endroits vides
void trieur(int tableau[], int tailleTableau); //Trie un tableu dans l'ordre croissant
int adresse_case(int *tableau_trie, int *tableau_original); //trouve l'adresse d'une valeur dna sun tableau
void admin(char *commande);

#endif
