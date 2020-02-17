#ifndef GRILLE_H
#define GRILLE_H
#include<stdbool.h>
#define SIZE 10

extern struct grille grille[SIZE][SIZE];

struct _case{
    enum etat etat;
};

enum etat {
    VIDE, OBLITEREE, J1, J2, J1J2
};

struct grille{
    struct _case cases[SIZE][SIZE];
};

struct batal{
    int taille;
    bool proprietaire;
    bool *segments;
    int posX;
    int posY;
    char* color;
};

void afficher_grille();


#endif