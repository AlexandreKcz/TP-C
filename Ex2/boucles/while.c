#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int objectif;
    scanf("%d", &objectif);
    int cpt = 0;
    while(cpt < objectif)
    {
        printf(" cpt : %d \n", cpt);
        cpt++;
    }

    return;
}