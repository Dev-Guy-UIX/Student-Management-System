#ifndef ETUDIANT_H
#define ETUDIANT_H

#define MAX 100

// Structure Etudiant
typedef struct {
    int matricule;
    char nom[50];
    float note;
} Etudiant;

// Variables globales
extern Etudiant liste[MAX];
extern int nombre;

// Prototypes des fonctions
void ajouter();
void afficher();
void rechercher();

#endif