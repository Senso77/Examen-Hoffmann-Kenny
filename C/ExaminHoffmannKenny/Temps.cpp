#include "Header.h"
#include "Struct.h"


void Temps()
{
	system("cls");
	int temps_min_joueur1 = 0; int temps_sec_joueur1 = 0;
	int temps_min_joueur2 = 0; int temps_sec_joueur2 = 0;
	int total_joueur1; int total_joueur2;

	printf("Quel temps souhaitez vous donner au joueur 1 (minutes)\n");
	scanf("%d", &temps_min_joueur1);
	printf("Quel temps souhaitez vous donner au joueur 1 (secondes)\n");
	scanf("%d", &temps_sec_joueur1);
	total_joueur1 = temps_sec_joueur1 + (temps_min_joueur1 * 60);

	printf("Quel temps souhaitez vous donner au joueur 2 (minutes)\n");
	scanf("%d", &temps_min_joueur2);
	printf("Quel temps souhaitez vous donner au joueur 2 (secondes)\n");
	scanf("%d", &temps_sec_joueur2);
	total_joueur2 = temps_sec_joueur2 + (temps_min_joueur2 * 60);

	FILE* fichier_temps = fopen("../temps.txt", "w+"); // A changer pour le dossiers de l'utulisateur.
	if (fichier_temps) 
	{
		fprintf(fichier_temps, "%d\n%d", total_joueur1, total_joueur2);
		fclose(fichier_temps);
	}
	system("cls");
}