#include<stdio.h>
#include<stdlib.h>
#include "grille.h"

struct grille grille;

void afficher_grille(){
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            switch(grille.cases[i][j].etat) {
            case OBLITEREE:
                printf("|XXX| ");
            break;
            case VIDE:
                printf("|   | ");
            break;
            case J1:
                printf("| 1 | ");
            break;
            case J2:
                printf("| 2 | ");
            break;
            case J1J2:
                printf("|1 2| ");
            break;
        }
        printf("------------------------------------------------------------\n");
    }
}