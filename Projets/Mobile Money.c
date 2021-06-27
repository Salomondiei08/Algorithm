#include <stdio.h>
#include "main.h"

int operation(void)
{
    int choix = 0, solde_init = 10000, solde_final = 0, montant_operation = 0;

    printf("\n\n==============Bienvevue au programme Mobile Money==============\n");
    printf("\n\t\tSolde Actuel : %d FCFA\n", solde_init);
    printf("\n\t\t\tMenu\n");
    printf("\t\t1- Depot d'argent\n");
    printf("\t\t2- Retrait d'argent\n");

    do
    {
        printf("\n\t\tVotre Choix : ");
        scanf("%d",&choix);
        if (choix > 2 || choix <1) printf("\tChoix incorrect, veuillez reesayer !\n");
    } while (choix > 2 || choix <1);
    do
    {
         printf("=======================\n");
        printf("Monatnt de l'operation : ");
        scanf("%d",&montant_operation);
        if (montant_operation < 0) printf("\nDonnee incorrecte, veuillez reesayer !\n");
    } while (montant_operation < 0);
    printf("=======================\n");
    if (choix == 1)
    {
        solde_final = solde_init + montant_operation;
        printf("Depot Effectue avec succes !\n=======================\nMontant de l'operation : %d FCFA\nNouveau solde          : %d FCFA\n", montant_operation, solde_final);
    }
    else
    {
        if (montant_operation > solde_init)
        {
            printf("Solde insuffisant !\n");
            return -1;
        }
        else 
        {
            solde_final = solde_init - montant_operation;
            printf("Depot Effectue avec succes !\n=======================\nMontant de l'operation : %d FCFA\nNouveau solde          : %d FCFA\n", montant_operation, solde_final);
        }
    }
    return 0;
}