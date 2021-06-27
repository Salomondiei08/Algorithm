#include <stdio.h>
#include "main.h"


void credit(void)
{
    int anciennete = 0, note_appreciation = 0, salaire_brut = 0;

    printf("\n\n==============Bienvenue au programme de Credit Immobilier==============\n");
    do {
        printf("\nAnciennete du salarie          : ");
        scanf("%d",&anciennete);
        if (anciennete < 0) printf("Donnee saisie incorrecte, veuillez reesayer !\n");
    } while (anciennete < 0);

    do {
        printf("\nNote d'appreciation du salarie : ");
        scanf("%d",&note_appreciation);
        if (note_appreciation < 0 || note_appreciation >20) printf("Donnee saisie incorrecte (Note du salarie entre 0 et 20), veuillez reesayer !\n");
    } while (note_appreciation < 0 || note_appreciation >20);

    do {
        printf("\nSalaire Brut du salarie        : ");
        scanf("%d",&salaire_brut);
        if (salaire_brut <= 0 ) printf("Donnee saisie incorrecte, veuillez reesayer !\n");
    } while (salaire_brut <= 0);

    if (anciennete >= 5 && note_appreciation > 12) printf("============================\nFelicitaions, vous pouvez beneficier du credit pour un montant de : %d FCFA\n", salaire_brut*10);
    else if (anciennete == 4 && note_appreciation > 15) printf("============================\nFelicitaions, vous pouvez beneficier du credit pour un montant de : %d FCFA\n", salaire_brut*10);
    else if (anciennete == 3 && note_appreciation > 17) printf("============================\nFelicitaions, vous pouvez beneficier du credit pour un montant de : %d FCFA\n", salaire_brut*10);
    else printf("============================\nVous ne pouvez pas beneficier de ce credit, Desole !\n");

}