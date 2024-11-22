#include "header.h"


void nombre_de_joueur(int *nombre) {
    do {
        printf("Choisissez le nombre de joueurs :\n");
        scanf("%d",nombre);
        while (getchar() != '\n');
    } while (*nombre!=2 && *nombre!=4);//Le jeu se joue à 2 ou 4 joueurs.

    //Selon le nombre de joueurs, attribuer le nombre de barrières.
}