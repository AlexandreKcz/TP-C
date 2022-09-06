#include <stdio.h>
#include <stdlib.h>

int *p;             // Declare un pointeur p vers un entier
int *a, b;          // Declare un pointeur a vers un entier et un entier b
int *p[10];         // Declare un tableau de 10 pointeurs vers des entiers
int (*p)[10];       // Declare un pointeur vers un Tableau d'entier
char *p();          // Declare un pointeur vers une fonction P
char (*p)();        //
int (*p)(char *a);  // Declare

char p() { return ""; }