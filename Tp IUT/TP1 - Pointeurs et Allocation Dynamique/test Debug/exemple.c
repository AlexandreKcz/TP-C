#include<stdio.h>

int main(void)
{
    int tab[3];
    int *p;
    // int **pp;
    int (*pt)[3];
    int a = 2;

    p = tab;
    pt = &tab;
    for (a = 0; a < 3; a++)
    {
        tab[a] = a;
        printf("%d \n", *(*pt+a));
    }

    return 0;
    
}