//
// Created by Mirina on 19/11/2024.
//
#include "header_premiere_partie_mirina.h"


void nombre_de_joueur(int *nombre) {
    do {
        printf("Choisissez le nombre de joueurs :\n");
        scanf("%d",nombre);
        while (getchar() != '\n');
    } while (*nombre!=2 && *nombre!=4);//Le jeu se joue à 2 ou 4 joueurs.

    //Selon le nombre de joueurs, attribuer le nombre de barrières.
}

pion_joueur* nom_joueur(int nombre) {
    pion_joueur* p=NULL;
    p= (pion_joueur*)malloc(nombre * sizeof(pion_joueur));//Allouer le tableau de structures (correspondant aux différents pions).
    int i;
    for (i=0;i<nombre;i++) {
        printf("Entrez le nom du joueur %d\n",i+1);//Pour chaque pion, donner le nom du joueur
        fgets(p[i].joueur, TAILLE, stdin);
        p[i].joueur[strcspn(p[i].joueur, "\n")] = '\0';

    }
    return p;
}
//Libérer la mémoire
void choix_du_joueur(int nombre,int * choix) {
    srand(time(NULL));
    *choix=(rand()%nombre)+1;//Choix d'un joueur au hasard entre 1 et le nombre de joueur inclus.
}

void choix_tour_joueur(pion_joueur* p,int choix) {
    printf("                    ---%s---\n",p[choix-1].joueur);
    printf("Voulez-vous deplacer votre pion ou deposer une de vos barrieres ?");
    //Boucle if(menu)
}
