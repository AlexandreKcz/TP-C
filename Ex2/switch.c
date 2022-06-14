#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int age;
    scanf("%d", &age);

    switch (age)
    {
        case 2 : 
            printf(" oui 1 ");
            break;
        case 4 :
            printf(" oui 2 ");
            break;
        case 10 :
            printf(" oui 3 ");
            break;
        case 16 :
            printf(" oui 4 ");
            break;
        default : 
            printf(" defaut");
            break;
    }

    return;
}