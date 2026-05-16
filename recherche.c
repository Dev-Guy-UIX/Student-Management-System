#include <stdio.h>
#include <string.h> // Inclusion nécessaire pour utiliser strcmp
#include "etudiant.h"

void rechercher()
{
    char mat[10]; // Devient un tableau de caractères pour accueillir le format alphanumérique
    int trouve = 0;

    printf("\nEntrer le matricule à rechercher (ex: 26G0001) : ");
    scanf("%s", mat); // Saisie d'une chaîne (pas besoin de '&')

    for (int i = 0; i < nombre; i++)
    {
        // Comparaison des chaînes de caractères : strcmp renvoie 0 si elles sont identiques
        if (strcmp(liste[i].matricule, mat) == 0)
        {
            printf("\n=== Étudiant trouvé ===\n");
            printf("Matricule : %s\n", liste[i].matricule); // Modifié %d en %s
            printf("Nom       : %s\n", liste[i].nom);
            printf("Note      : %.2f\n", liste[i].note);

            trouve = 1;
            break; // Sortie de la boucle dès qu'on a trouvé
        }
    }

    if (trouve == 0)
    {
        printf("Aucun étudiant trouvé.\n");
    }
}
