#include "Header.h"
#include "Struct.h"

void choix_pion(int a_position_ligne, int a_piece, FILE *a_fichier_map, int a_couleur, int a_position_collone)
{
    printf("En quel collone souhaitez vous positionner votre pion ?\nMerci de l'ecrire en chiffre.\n");
    scanf("%d", &a_position_collone);
    printf("En quel position souhaitez vous placer votre pion sur la ligne ?\nMerci de l'ecrire en chiffre.\n");
    scanf("%d", &a_position_ligne);

    // Je vérifie si c'est pas plus grand ou petit que la taille max de mon tableau.
    if (a_position_collone > 8 || a_position_ligne > 8 || a_position_collone < 1 || a_position_ligne < 1)
    {
        printf("Votre selection est incorrect cette emplacement n'existe pas.\n");
    }
    else
    {
        system("cls");
        printf("Choisisser un couleur\n");
        printf("1. blanc\n");
        printf("2. Noir\n");
        scanf("%d", &a_couleur);

        // Ma boucle qui vérifie tant que je suis pas a la fin.
        // Et j'incrémente ma ligne jusqu'a ce que je sois sur la ligne séléctionner par l'utulisateur.
        // Et avant tout je rewind (revient) a ma postion 0 de mon fichier.
        int position_map = 0;
        int ligne = 0;
        rewind(a_fichier_map);
        while (position_map != EOF && ligne < a_position_collone)
        {
            position_map = fgetc(a_fichier_map);
            if (position_map == '\n')
            {
                ligne++;
            }
        }

        // Mes conditions if pour savoir quel piece a été séléctionner.
        // Ainsi que la couleur voulue pour le pion
        // Ensuite je printf ma valeur en lettre a la position voulue en ligne.
        // 0 rien, 1 pion, 2 tour, 3 fou, 4 cavalier, 5 reine, 6 roi.
        if (a_piece == 1)
        {
            if (a_couleur == 1)
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "A");
                fclose(a_fichier_map);
            }
            else
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "B");
                fclose(a_fichier_map);
            }
        }
        else if (a_piece == 2)
        {
            if (a_couleur == 1)
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "C");
                fclose(a_fichier_map);
            }
            else
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "D");
                fclose(a_fichier_map);
            }
        }
        else if (a_piece == 3)
        {
            if (a_couleur == 1)
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "E");
                fclose(a_fichier_map);
            }
            else
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "F");
                fclose(a_fichier_map);
            }
        }
        else if (a_piece == 4)
        {
            if (a_couleur == 1)
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "G");
                fclose(a_fichier_map);
            }
            else
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "H");
                fclose(a_fichier_map);
            }
        }
        else if (a_piece == 5)
        {
            if (a_couleur == 1)
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "I");
                fclose(a_fichier_map);
            }
            else
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "J");
                fclose(a_fichier_map);
            }
        }
        else if (a_piece == 6)
        {
            if (a_couleur == 1)
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "K");
                fclose(a_fichier_map);
            }
            else
            {
                fseek(a_fichier_map, a_position_ligne, SEEK_CUR);
                fprintf(a_fichier_map, "L");
                fclose(a_fichier_map);
            }
        }
    }
}
