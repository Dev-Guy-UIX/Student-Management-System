#ifndef ETUDIANT_H
#define ETUDIANT_H

#define MAX 100

// Structure pour représenter un étudiant
typedef struct
{

    char faculte[50];
    char departement[50];

    int anneeAcademique;

    char niveau[20];

    char matricule[20];

    char nom[50];

    int anneeNaissance;

} Etudiant;

// Variables globales
extern Etudiant liste[MAX];
extern int nombre;

// Fonctions
void ajouter();
void afficher();
void rechercher();

#endif