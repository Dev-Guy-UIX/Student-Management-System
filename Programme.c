#include <stdio.h>
#include <string.h> // Nécessaire pour strcmp et sprintf

#define MAX 100

// ==========================================
// 1. DÉCLARATION DE LA STRUCTURE ET DES VARIABLES
// ==========================================
typedef struct {
    char matricule[10]; // Chaîne de caractères pour le format "26G0001"
    char nom[50];
    float note;
} Etudiant;

// Variables globales
Etudiant liste[MAX];
int nombre = 0;

// ==========================================
// 2. PROTOTYPES DES FONCTIONS
// ==========================================
void ajouter();
void afficher();
void rechercher();

// ==========================================
// 3. FONCTION PRINCIPALE (MENU)
// ==========================================
int main()
{
    int choix;

    do
    {
        printf("\n======= MENU =======\n");
        printf("1. Ajouter un étudiant\n");
        printf("2. Afficher les étudiants\n");
        printf("3. Rechercher un étudiant\n");
        printf("4. Quitter\n");

        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouter();
            break;

        case 2:
            afficher();
            break;

        case 3:
            rechercher();
            break;

        case 4:
            printf("Fin du programme.\n");
            break;

        default:
            printf("Choix invalide.\n");
        }

    } while (choix != 4);

    return 0;
}

// ==========================================
// 4. DÉFINITION DES FONCTIONS
// ==========================================

// Fonction pour ajouter un étudiant avec matricule automatique
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
    // %04d permet d'afficher le numéro sur 4 chiffres avec des zéros au début.
    sprintf(liste[nombre].matricule, "26G%04d", nombre + 1);
    
    printf("Matricule attribué automatiquement : %s\n", liste[nombre].matricule);

    printf("Nom : ");
    scanf("%s", liste[nombre].nom);

    printf("Note : ");
    scanf("%f", &liste[nombre].note);

    nombre++;

    printf("Étudiant ajouté avec succès !\n");
}

// Fonction pour afficher tous les étudiants enregistrés
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
        printf("Matricule : %s\n", liste[i].matricule);
        printf("Nom       : %s\n", liste[i].nom);
        printf("Note      : %.2f\n", liste[i].note);
    }
}

// Fonction pour rechercher un étudiant par son matricule alphanumérique
void rechercher()
{
    char mat[10]; // Tableau de caractères pour accueillir le format saisi
    int trouve = 0;

    printf("\nEntrer le matricule à rechercher (ex: 26G0001) : ");
    scanf("%s", mat); // Saisie textuelle (pas besoin du symbole '&')

    for (int i = 0; i < nombre; i++)
    {
        // Comparaison des chaînes de caractères avec strcmp
        if (strcmp(liste[i].matricule, mat) == 0)
        {
            printf("\n=== Étudiant trouvé ===\n");
            printf("Matricule : %s\n", liste[i].matricule);
            printf("Nom       : %s\n", liste[i].nom);
            printf("Note      : %.2f\n", liste[i].note);

            trouve = 1;
            break; // On arrête la recherche dès qu'il est trouvé
        }
    }

    if (trouve == 0)
    {
        printf("Aucun étudiant trouvé.\n");
    }
}
