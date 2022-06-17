#include "Header.h"
#include "Struct.h"

void Affichage_map(int taille, int map[8][9], FILE *a_fichier_map)
{
    // Deux compteurs pour mes futurs position i et j
    // Numéro d'identification ASCII pour la lettre A [65 = A].
    // Et je crée mon tableau ou je stock mes lettres en nombres.
    // J'initialise ma variable pour mon fichier.
    // Je dit que ma variable fichier ouvre le(map.txt) en écriture et lecture.
    //Clear screen pour y voir quelque choses. 
    int compteur = 0;
    int compteur2 = 1;
    int valeur_lettre = 65;
    char lettre[10];
    a_fichier_map = NULL;
    a_fichier_map = fopen("../map.txt", "w+"); // A changer pour le dossiers de l'utulisateur.
    system("cls");

    // Je crée une valeur pour ma position et je me mets a la position 0 de mon fichier.
    // Je print la valeur de ma taille en position 0 du fichier (tout début)
    // Je crée un espace entre a la position 0.0 pour que tout sois alligner.
    // Puis je crée une boucle pour afficher les nombres d'en haut.
    // Et puis je passe a la ligne suivante de nouveau.
    fseek(a_fichier_map, 0, SEEK_SET);
    fprintf(a_fichier_map, "%d\n", taille);
    printf("\  ");
    for (int k = 1; k < taille + 1; k++)
    {
        /*fprintf(fichier, "%d", k);*/
        printf("%d ", k);
    }
    printf("\n");

    // J'affiche mon tableau avec mes lettres a gauche cette fois.
    for (int i = 1; i <= taille; i++)
    {
        for (int j = 1; j <= taille; j++)
        {
            map[i][j];
            //affichage des lettre
            if (j == 1 && i >= 0)
            {
                sprintf(lettre, "%c", valeur_lettre);
                printf("%s ", lettre);
                fprintf(a_fichier_map, "%s", lettre);
                valeur_lettre++;
            }
            //Diviser le tableau en 2 Si oui alors Blanc Sinon alors Noir case par case.
            if ((i + j) % 2 == 0)
            {
                printf(COULEUR_BLANC "X " COULEUR_RESET);
                fprintf(a_fichier_map, "X");
            }
            else
            {
                printf(COULEUR_NOIR "X " COULEUR_RESET);
                fprintf(a_fichier_map, "X");
            }
        }
        if (i < taille)
        {
            printf("\n");
            fprintf(a_fichier_map, "\n");
        }
    }
    system("pause");
    fclose(a_fichier_map);
}