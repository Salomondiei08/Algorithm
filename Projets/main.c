#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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