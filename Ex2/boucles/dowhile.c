#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int objectif;
    printf("Votre objectif : ");
    scanf("%d", &objectif);
    int cpt = 0;

    do
    {
        printf("\ncpt : %d", cpt);
        cpt++;
    } while(cpt < objectif);
}