#pragma once
#include "Header.h"

// Code couleur console Visual Studio 2022
#define COULEUR_NOIR "\u001b[30;1m"
#define COULEUR_BLANC "\x1b[37m"
#define COULEUR_RESET "\x1b[0m"

//typedef struct Map {
//    int colonne;
//    int ligne;
//    int couleur;
//    int occuper;
//};

// Identifiant pour la séléction +1 a chaque incrémentation vers le bas.
// 0 rien, 1 pion, 2 tour, 3 fou, 4 cavalier, 5 reine, 6 roi.
enum pion {
    RIEN = 0,
    PION,
    TOUR,
    FOU,
    CAVALIER,
    REINE,
    ROI,
};

//Différentes fonctions
void Affichage_map(int taille, int map[8][9],FILE *a_fichier_map);
void Placement_pion(int taille, int map[8][9],FILE *a_fichier_map);
void choix_pion(int a_position_ligne, int a_piece, FILE *a_fichier_map, int a_couleur,int a_position_collone);
void Temps();