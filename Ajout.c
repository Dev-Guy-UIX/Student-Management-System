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

    // Génération automatique du matricule sous la forme 26G0001, 26G0002, etc.
    // %04d permet d'afficher le nombre sur 4 chiffres avec des zéros au début.
    sprintf(liste[nombre].matricule, "26G%04d", nombre + 1);
    
    printf("Matricule attribué automatiquement : %s\n", liste[nombre].matricule);

    printf("Nom : ");
    scanf("%s", liste[nombre].nom);

    printf("Note : ");
    scanf("%f", &liste[nombre].note);

    nombre++;

    printf("Étudiant ajouté avec succès !\n");
}
