#include<stdio.h>

int main()
{
    char string[] = "UNIVERSIDADE POSITIVO";
    char *p;
    p = &string[9];

    *p = '*';

    printf("\n%s" ,string);
}