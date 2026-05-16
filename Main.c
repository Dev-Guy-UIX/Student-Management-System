#include <stdio.h>
#include "etudiant.h"

// Initialisation des variables globales
Etudiant liste[MAX];
int nombre = 0;

int main()
{
    int choix;

    do
    {
        printf("\n======= MENU =======\n");
        printf("1. Ajouter un étudiant\n");
        printf("2. Afficher les étudiants\n");
        printf("3. Rechercher un étudiant\n");
        printf("4. Quitter\n");

        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouter();
            break;

        case 2:
            afficher();
            break;

        case 3:
            rechercher();
            break;

        case 4:
            printf("Fin du programme.\n");
            break;

        default:
            printf("Choix invalide.\n");
        }

    } while (choix != 4);

    return 0;
}
