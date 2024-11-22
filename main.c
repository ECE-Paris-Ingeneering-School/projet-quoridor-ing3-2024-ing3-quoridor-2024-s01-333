//
// Created by duni9 on 20/11/2024.
//
//
// Created by Camille Marlin on 18/11/2024.
//
// Fonction pour dessiner une grille en ligne
#include "header.h"
#define SIZE 17

void grille() {
    for (int i = 0; i < GRILLE; i++) {
        // Dessiner la ligne supérieure des cellules
        for (int j = 0; j < GRILLE; j++) {
            printf("+---"); // Coin et bord horizontal
        }
        printf("+\n"); // Terminer la ligne supérieure

        // Dessiner la ligne centrale avec espaces pour les cellules
        for (int j = 0; j < GRILLE; j++) {
            printf("|   "); // Bord vertical et espace pour le contenu
        }
        printf("|\n"); // Terminer la ligne centrale
    }
    // Dessiner la dernière ligne horizontale (bas de la grille)
    for (int j = 0; j < GRILLE; j++) {
        printf("+---");
    }
    printf("+\n");
}

void placer_dans_grille(char grid[GRILLE][GRILLE]) {
    // Exemple : remplir le tableau avec des éléments spécifiques
    grid[0][2] = 'B'; // Ligne 1, Colonne C
}

void grille_et_contenu(char grid[GRILLE][GRILLE]) {
    for (int i = 0; i < GRILLE; i++) {
        // Dessiner la ligne supérieure des cellules
        for (int j = 0; j < GRILLE; j++) {
            printf("+---"); // Coin et bord horizontal
        }
        printf("+\n"); // Terminer la ligne supérieure

        // Dessiner la ligne centrale avec le contenu des cellules
        for (int j = 0; j < GRILLE; j++) {
            printf("| %c ", grid[i][j] ? grid[i][j] : ' '); // Contenu ou espace vide
        }
        printf("|\n"); // Terminer la ligne centrale
    }

    // Dessiner la dernière ligne horizontale (bas de la grille)
    for (int j = 0; j < GRILLE; j++) {
        printf("+---");
    }
    printf("+\n");
}

void gotoligcol(int lig, int col) {
    printf("\033[%d;%dH", lig, col); // pour positionner le curseur
}

void debut_joueurs(joueur tab[],int *nombre_joueurs) {
    for (int i = 0; i < *nombre_joueurs; i++) {
        printf("entrez le nom du joueur");
        scanf(" %s",&tab[i].nom);

        do {
            printf("quel est votre pion choisi? tapez ");
            scanf("%c",&tab[i].carac_pion);
            printf(" %c",&tab[i].carac_pion);
        }while(tab[i].carac_pion != '0x01' && tab[i].carac_pion != '0x02'
            && tab[i].carac_pion != '0x03' && tab[i].carac_pion != '0x04');
    }
}


void lancer_nouvelle_partie() {

}

/*
void menu() {
    int *n;

    do {
        printf("1. Lancer une nouvelle partie");
        printf("2. Reprendre une partie sauvegardée");
        printf("3. Afficher l'aide");
        printf("4. Afficher les scores des joueurs");
        printf("5. quitter le jeu");
        printf("entrez votre choix");
        scanf("%d",n);

    }while(*n<1 || *n>5);

    switch(*n) {
        case 1:
            lancer_nouvelle_partie();
        break;

        case 2:
            reprendre_partie_sauvegardée();
        break;

        case 3:
            afficher_aide();
        break;

        case 4:
            afficher_score_joueurs();
        break;

        case 5:
            exit(0);



    }

}

*/