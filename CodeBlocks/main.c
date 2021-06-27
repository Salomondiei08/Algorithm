#include <stdio.h>
#include <stdlib.h>


void credit(void);
int main(void);
void matrice (void);
int main(void)
{
    int choix = 0, choixfin = 0;
    do {
        printf("\n==============Bienvenue au programme==============\n");
        printf("\n\t\t\tMenu\n\n");
        printf("\t\t1- CREDIT IMMOBILIER\n");
        printf("\t\t2- OPERATION MOBILE MONEY\n");
        printf("\t\t3- MULTIPLICATION DE MATRICESS\n");
        printf("\t\t4- QUITTER\n");
        do
        {
            printf("\n\t\t\tVotre Choix : ");
            scanf("%d",&choix);
            if (choix > 4 || choix <1) printf("\t\tChoix incorrect, veuillez reesayer !\n");
        } while (choix > 4 || choix <1);

        if (choix == 1) credit();
        else if (choix == 2) operation();
        else if (choix == 3) matrice();
        else if (choix == 4);
        printf("\n\tvoulez vous continuer a utiliser l'application ? (1- OUI   2-NON) : ");
        scanf("%d",&choixfin);
    } while (choixfin == 1);
    printf("========================================================\n\tMerci d'avoir utilise notre application :)\n");
    system("pause");

    return 0;
}
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

void matrice (void)
{
    const int OrdreMatrice = 6;
    int matrice1[OrdreMatrice][OrdreMatrice];
    int matrice2[OrdreMatrice][OrdreMatrice];
    int matrice3[OrdreMatrice][OrdreMatrice];
    int i = 0, j = 0, colonne = 0, k = 0;

    printf("\n\n==========Bienvenue dans le programme de multipliacation de mattrice==========\n");

    do {
    printf("\nNombre de Colonnes et de ligne des Matrices (Entre 3 et 6) : ");
    scanf("%d",&colonne);
    if (colonne > OrdreMatrice || colonne < 3)
        printf("\nChoisissez une valeur entre 3 et 6 !\n");
    } while (colonne > OrdreMatrice || colonne < 3);

    printf("\n\tVeuillez remplir la 1ere Matrice\n");
    for (i = 0; i < colonne; i++)
    {
        printf("\n\t\tColonne %d\n",i+1);
        for (j = 0; j < colonne; j++)
        {
            scanf("%d",&matrice1[i][j]);
        }

    }
    printf("\nFin du remplissage de la 1ere Matrice\n");

    printf("\n\t\tMatrice A\n\n");
    for (i = 0; i < colonne; i++)
    {
        for (j = 0; j < colonne; j++)
        {
              printf("%d\t",matrice1[i][j]);
        }
        printf("\n");
     }

    printf("\n\tVeuillez remplir la 2eme Matrice\n");
     for (i = 0; i < colonne; i++)
    {
        printf("\n\t\tColonne %d\n",i+1);
        for (j = 0; j < colonne; j++)
        {
            scanf("%d",&matrice2[i][j]);
        }
    }
    printf("\nFin du remplissage de la 2eme Matrice\n");

    printf("\n\t\tMatrice B\n\n");
    for (i = 0; i < colonne; i++)
    {
        for (j = 0; j < colonne; j++)
        {
              printf("%d\t",matrice2[i][j]);
        }
        printf("\n");
     }

    printf("\n\tAffichage des valeurs du tableau final (Matrice A*B)\n\n");

     for (i = 0; i < colonne; i++)
     {
        for (j = 0; j < colonne; j++)
         {
            matrice3[i][j] = 0;
            for (k = 0; k <colonne; k++)
             {
                matrice3[i][j] += matrice1[i][k] * matrice2[k][i];
             }
         }
    }
    for (i = 0; i < colonne; i++)
    {
        for (j = 0; j < colonne; j++)
        {
              printf("%d\t",matrice3[j][i]);
        }
        printf("\n");
    }
}

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
