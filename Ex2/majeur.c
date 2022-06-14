#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int age;

    scanf("%d", &age);

    if(age >= 18)
    {
        printf(" vous etes majeur car vous avez : %d \n", age);
    }
    else
    {
        printf("vous etes encore mineur car vous avez : %d \n", age);
    }
    return;
}