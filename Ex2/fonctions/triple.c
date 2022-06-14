#include <stdio.h>
#include <stdlib.h>

int triple(int nombre)
{
    return nombre*3;
}

void main(int argc, char *argv[])
{
    int nbr;
    scanf("%d",&nbr);
    printf("%d", triple(nbr));
}