#include <stdio.h>
#include "etudiant.h"

void afficher()
{

    if (nombre == 0)
    {

        printf("\nAucun étudiant enregistré.\n");
        return;
    }

    printf("\n===== LISTE DES ÉTUDIANTS =====\n");

    for (int i = 0; i < nombre; i++)
    {

        printf("\nÉtudiant %d\n", i + 1);

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
    }
}