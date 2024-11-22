//
// Created by Mirina on 19/11/2024.
//

#ifndef HEADER_H
#define HEADER_H
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 100// Taille maximale des noms et du nombre de joueurs.


typedef struct pion{// Structure du pion.
    int color,ligne,colonne;// Couleur et position du pion.
    char joueur[TAILLE];// Joueur possédant le pion.
}pion_joueur;

void nombre_de_joueur(int *nombre);//Choisir le nombre de joueurs.
pion_joueur* nom_joueur(int nombre);// Attribuer à chaque pion le nombre de joueurs.
void choix_du_joueur(int nombre,int *choix);//Choix au hasard du joueur qui joue
void choix_tour_joueur(pion_joueur* p,int choix);//Choix de jeu du joueur


#endif //HEADER_H
