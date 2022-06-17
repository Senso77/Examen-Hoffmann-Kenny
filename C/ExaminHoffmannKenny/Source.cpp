#include "Header.h"
#include "Struct.h"

int main(void) {
    int choix_menu;
    int taille_map;
    FILE* fichier = NULL;
    // Je crée mon tableau 2 dimension map de 8 sur 8 max.
    int map[8][9];

    printf("----------------------------------------------------------------------\n");
    printf("|                                                                    |\n");
    printf("|                             Bienvenue                              |\n");
    printf("|                       Dans le code Echequier by                    |\n");
    printf("|                           Hoffmann Kenny                           |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("----------------------------------------------------------------------\n");
    printf("\n");
    do {
        printf("\t------------Appuyez sur 1 pour Afficher la map-----------------\n");
        printf("\t------------Appuyez sur 2 pour Positionner Pion----------------\n");
        printf("\t------------Appuyez sur 3 pour parametrer le temps-------------\n");
        printf("\t------------Appuyez sur 4 pour quitter le programme------------\n");
        printf("\n\t\t\tVotre choix: ");
        scanf("%d", &choix_menu);
        if (choix_menu > 4)
        {
            printf("Votre selection est incorrect merci de corriger votre erreur.\n");
            system("cls");
        }
        else
        {
            switch (choix_menu) {
            case 1:
                system("CLS");
                printf("Quel taille de tableau souhaitez vous avoir ? [8 Maximum]\n");
                scanf("%d", &taille_map);
                printf("\n");
                if (taille_map > 8 || taille_map < 1)
                {
                    printf("Cette taille est trop grande ou trop petite pour jouer au echec [Minimum : 1 | Maximum : 2]\n");
                    system("PAUSE");
                }
                else
                {
                    Affichage_map(taille_map, map, fichier);
                }
                break;
            case 2:
                Placement_pion(taille_map, map, fichier);
                break;
            case 3:
                Temps();
                break;
            case 4:
                printf("Aurevoir :)\n\n");
                break;
            }
        } 
    } while (choix_menu != 4);
    return EXIT_SUCCESS;
}