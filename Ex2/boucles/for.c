#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int objectif;
    scanf("%d", &objectif);
    int compteur;

    for(compteur = 0; compteur < objectif; compteur++)
    {
        printf("\ncompteur : %d",compteur);
    }

    return;
}