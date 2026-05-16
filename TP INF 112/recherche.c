#include <stdio.h>
#include <string.h>

#include "etudiant.h"

void rechercher()
{

    char mat[20];
    int trouve = 0;

    printf("\nEntrer le matricule : ");
    scanf("%s", mat);

    for (int i = 0; i < nombre; i++)
    {

        if (strcmp(liste[i].matricule, mat) == 0)
        {

            printf("\n===== ÉTUDIANT TROUVÉ =====\n");

            printf("Faculté           : %s\n",
                   liste[i].faculte);

            printf("Département       : %s\n",
                   liste[i].departement);

            printf("Année académique  : %d\n",
                   liste[i].anneeAcademique);

            printf("Niveau            : %s\n",
                   liste[i].niveau);

            printf("Matricule         : %s\n",
                   liste[i].matricule);

            printf("Nom               : %s\n",
                   liste[i].nom);

            printf("Année naissance   : %d\n",
                   liste[i].anneeNaissance);

            trouve = 1;

            break;
        }
    }

    if (trouve == 0)
    {

        printf("\nAucun étudiant trouvé.\n");
    }
}