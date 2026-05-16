#ifndef ETUDIANT_H
#define ETUDIANT_H

#define MAX 100


typedef struct {
    char matricule[10]; 
    char nom[50];
    float note;
} Etudiant;

// Variables globales partagées entre les modules
extern Etudiant liste[MAX];
extern int nombre;

// Prototypes des fonctions de l'applicatio
void ajouter();
void afficher();
void rechercher();

#endif
