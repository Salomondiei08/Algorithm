#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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