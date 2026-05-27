#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// STRUCTURE STATION QUI EST UNE VARIABLE 
typedef struct Station
{
    char nom[50];
    struct Station* suivant;

} Station;
// ICI CEST LA STRUCTURE LIGNE
typedef struct Ligne
{
    char nom[50];

    Station* debut;

    struct Ligne* suivante;

} Ligne;
// AFFICHAGE RECURSIF DU PARCOURS NORMAL
void afficherParcours(Station* station)
{
    if (station == NULL)
        return;

    printf("%s", station->nom);

    if (station->suivant != NULL)
        printf(" -> ");

    afficherParcours(station->suivant);
}




// AFFICHAGE RECURSIF DU PARCOURS INVERSE

void afficherParcoursInverse(Station* station)
{
    if (station == NULL)
        return;

    afficherParcoursInverse(station->suivant);

    printf("%s", station->nom);

    if (station != NULL && station->suivant != NULL)
        printf(" -> ");
}
// AFFICHER UNE LIGNE COMPLETE
void afficherLigne(Ligne* ligne)
{
    if (ligne == NULL)
        return;

    printf("\n TRAFIC ROUTIER\n");
    printf("Ligne : %s\n", ligne->nom);
    printf("ROAD TRAFIC \n");

    printf(" Votre Trajet aller :\n");
    afficherParcours(ligne->debut);

    printf("\n\n Votre Trajet retour :\n");
    afficherParcoursInverse(ligne->debut);

    printf("\n");
}
// AFFICHER TOUT LE RESEAU
void afficherReseau(Ligne* reseau)
{
    Ligne* courant = reseau;

    printf("\nBIENVENUE DANS NOTRE RESEAU\n");

    while (courant != NULL)
    {
        afficherLigne(courant);

        courant = courant->suivante;
    }
}




int main()
{
    // Stations Ligne A
    Station* s1 = malloc(sizeof(Station));
    Station* s2 = malloc(sizeof(Station));
    Station* s3 = malloc(sizeof(Station));

    strcpy(s1->nom, "JOUVENCE");
    strcpy(s2->nom, "ACCACIA");
    strcpy(s3->nom, "UNIVERSITE");

    s1->suivant = s2;
    s2->suivant = s3;
    s3->suivant = NULL;


    // Ligne A
    Ligne* ligneA = malloc(sizeof(Ligne));

    strcpy(ligneA->nom, "premier trajet");

    ligneA->debut = s1;
    ligneA->suivante = NULL;
     s1 = malloc(sizeof(Station));
     s2 = malloc(sizeof(Station));
     s3 = malloc(sizeof(Station));

    strcpy(s1->nom, "MESSASSI");
    strcpy(s2->nom, "POSTE");
    strcpy(s3->nom, "UNIVERSITE ");
//ligneB
    s1->suivant = s2;
    s2->suivant = s3;
    s3->suivant = NULL;

    Ligne* ligneB = malloc(sizeof(Ligne));

    strcpy(ligneB->nom, "second trajet");

    ligneB->debut = s1;
    ligneB->suivante = NULL;


    // Affichage
    afficherReseau(ligneA);
    afficherReseau(ligneB);
    return 0;
}
