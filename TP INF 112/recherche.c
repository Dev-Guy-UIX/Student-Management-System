#include <stdio.h>
#include "etudiant.h"

void rechercher()
{

    int mat;
    int trouve = 0;

    printf("\nEntrer le matricule à rechercher : ");
    scanf("%d", &mat);

    for (int i = 0; i < nombre; i++)
    {

        if (liste[i].matricule == mat)
        {

            printf("\n=== Étudiant trouvé ===\n");
            printf("Matricule : %d\n", liste[i].matricule);
            printf("Nom       : %s\n", liste[i].nom);
            printf("Note      : %.2f\n", liste[i].note);

            trouve = 1;
            break;
        }
    }

    if (trouve == 0)
    {
        printf("Aucun étudiant trouvé.\n");
    }
}