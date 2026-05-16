#include <stdio.h>
#include "etudiant.h"

int main()
{

    int choix;

    do
    {

        printf("\n==============================\n");
        printf(" SYSTÈME DE GESTION ÉTUDIANTE\n");
        printf("==============================\n");

        printf("1. Ajouter un étudiant\n");
        printf("2. Afficher les étudiants\n");
        printf("3. Rechercher un étudiant\n");
        printf("4. Quitter\n");

        printf("\nVotre choix : ");
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
            printf("\nMerci d'avoir utilisé le système.\n");
            break;

        default:
            printf("\nChoix invalide.\n");
        }

    } while (choix != 4);

    return 0;
}