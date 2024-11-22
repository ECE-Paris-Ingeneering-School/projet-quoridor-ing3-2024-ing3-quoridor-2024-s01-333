#include "header_premiere_partie_mirina.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 100


int main(void) {
    int nombre=0;
    int choix=0;
    pion_joueur* p;

    nombre_de_joueur(&nombre);
    p=nom_joueur(nombre);
    choix_du_joueur(nombre,&choix);

    printf("Le choix du joueur est %s",p[choix-1].joueur);

    printf("\n");
    choix_tour_joueur(p,choix);


    return 0;
}

