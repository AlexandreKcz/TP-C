#include <stdio.h>
#include <stdlib.h>

double aireRectangle(double largeur, double hauteur);

void main(int argc, char *argv[])
{
    int largeur, hauteur;
    scanf("%d", &largeur);
    scanf("%d", &hauteur);

    printf("Le rectangle a une de aire de : %d ", aireRectangle(largeur, hauteur));

    return;
}

double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}