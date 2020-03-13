#include<stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 1 , b = 2 ;
    int * pa = &a;
    int * pb = &b;
    printf("%i   %i \n", a , b);
    swap(pa,pb);
    printf("%i   %i\n", a , b);
}

void swap(int *a, int *b)
{
    int c ;
    c = *a;
    *a = *b;
    *b = c;
}