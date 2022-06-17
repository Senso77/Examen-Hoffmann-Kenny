#include "Header.h"
#include "Struct.h"

void Placement_pion(int taille, int map[8][9], FILE *a_fichier_map)
{
    // Mes variables de positions et de couleur.
    int position_ligne = NULL;
    int position_collone = NULL;
    int positionX = NULL;
    int positionY = NULL;
    int couleur = NULL;

    // Je crée ma piece avec mes paramètres de Pion qui sont les positions de mon switch en bas 
    // 0 rien, 1 pion, 2 tour, 3 fou, 4 cavalier, 5 reine, 6 roi.
    enum pion piece {};

    a_fichier_map = fopen("../map.txt", "r+"); // A changer pour le dossiers de l'utulisateur.
    system("cls");

    printf("Choisissez votre pion\n1. Pion\n2. Tour\n3. Fou\n4. Cavalier\n5. Reine\n6. Roi\n");
    scanf("%d", &piece);

    //Vérification que le fichier sois pas null.
    if (a_fichier_map != NULL)
    {
        // Les différents choix de pions a positionner.
        switch (piece)
        {
        case RIEN:
            break;
        case PION:
            choix_pion(position_ligne,piece, a_fichier_map,couleur, position_collone);
            break;
        case TOUR:
            choix_pion(position_ligne, piece, a_fichier_map, couleur, position_collone);
            break;
        case FOU:
            choix_pion(position_ligne, piece, a_fichier_map, couleur, position_collone);
            break;
        case CAVALIER:
            choix_pion(position_ligne, piece, a_fichier_map, couleur, position_collone);
            break;
        case REINE:
            choix_pion(position_ligne, piece, a_fichier_map, couleur, position_collone);
            break;
        case ROI:
            choix_pion(position_ligne, piece, a_fichier_map, couleur, position_collone);
            break;
        default:
            break;
        }
    }
}