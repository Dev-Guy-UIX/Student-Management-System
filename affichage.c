#include <stdio.h>
#include "etudiant.h"

void afficher()
{
    // Vérifier si la liste est vide
    if (nombre == 0)
    {
        printf("\nAucun étudiant enregistré.\n");
        return;
    }

    printf("\n===== Liste des étudiants =====\n");

    for (int i = 0; i < nombre; i++)
    {
        printf("\nÉtudiant %d\n", i + 1);
        printf("Matricule : %s\n", liste[i].matricule); // Modifié %d en %s
        printf("Nom       : %s\n", liste[i].nom);
        printf("Note      : %.2f\n", liste[i].note);
    }
}
