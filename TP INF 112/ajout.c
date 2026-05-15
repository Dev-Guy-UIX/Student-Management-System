#include <stdio.h>
#include "etudiant.h"

void ajouter()
{

    // Vérifier si la liste est pleine
    if (nombre >= MAX)
    {
        printf("La liste est pleine !\n");
        return;
    }

    printf("\n=== Ajouter un étudiant ===\n");

    printf("Matricule : ");
    scanf("%d", &liste[nombre].matricule);

    printf("Nom : ");
    scanf("%s", liste[nombre].nom);

    printf("Note : ");
    scanf("%f", &liste[nombre].note);

    nombre++;

    printf("Étudiant ajouté avec succès !\n");
}