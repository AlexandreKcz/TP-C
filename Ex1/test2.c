#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    const int VARIABLE_INIT = 5;
    //signed ou unsigned
    int variable;
    variable = VARIABLE_INIT;
    printf("variable : %d", variable);

    variable--;

    printf("\n%d", variable);

    return;
}