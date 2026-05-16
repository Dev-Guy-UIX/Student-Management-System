#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "etudiant.h"

// Fonction pour générer un matricule
void genererMatricule(int anneeAcademique,
                      char matricule[])
{

    int deuxChiffres;
    char lettre;
    int chiffres;

    // Extraire les 2 derniers chiffres
    deuxChiffres = anneeAcademique % 100;

    // Lettre majuscule aléatoire
    lettre = 'A' + rand() % 26;

    // Nombre aléatoire entre 1000 et 9999
    chiffres = 1000 + rand() % 9000;

    // Construire le matricule
    sprintf(matricule,
            "%d%c%d",
            deuxChiffres,
            lettre,
            chiffres);
}

void ajouter()
{

    char choix;

    // Initialiser le générateur aléatoire
    srand(time(NULL));

    do
    {

        if (nombre >= MAX)
        {

            printf("\nLa liste est pleine.\n");
            return;
        }

        printf("\n===== Ajouter un étudiant =====\n");

        printf("Faculté : ");
        scanf(" %[^\n]",
              liste[nombre].faculte);

        printf("Département : ");
        scanf(" %[^\n]",
              liste[nombre].departement);

        printf("Année académique : ");
        scanf("%d",
              &liste[nombre].anneeAcademique);

        printf("Niveau : ");
        scanf(" %[^\n]",
              liste[nombre].niveau);

        // Génération automatique du matricule
        genererMatricule(
            liste[nombre].anneeAcademique,
            liste[nombre].matricule);

        printf("Nom de l'étudiant : ");
        scanf(" %[^\n]",
              liste[nombre].nom);

        printf("Année de naissance : ");
        scanf("%d",
              &liste[nombre].anneeNaissance);

        nombre++;

        printf("\nÉtudiant ajouté avec succès.\n");

        printf("\nAjouter un autre étudiant ? (o/n) : ");
        scanf(" %c", &choix);

    } while (choix == 'o' || choix == 'O');
}