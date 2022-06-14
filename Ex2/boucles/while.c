#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int objectif;
    scanf("votre objectif : %d", &objectif);
    int cpt = 0;
    while(cpt < objectif)
    {
        printf(" cpt : %d", cpt);
        cpt++;
    }

    return;
}