#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);
void swapVector(int a[], int b[], int size);
int main()
{
    int a = 1 , b = 2 ;
    int veta[3] = {1,2,3}, vetb[3]= {3,4,5};
    int * pa = &a;
    int * pb = &b;
    printf("%i   %i \n", a , b);
    swap(pa,pb);
    printf("%i   %i\n", a , b);
    printf("\n\n");

    swapVector(veta, vetb,3);
    for(int i = 0 ; i <3 ; i++ )
    {
        printf(" %i " , veta[i]);
    }
    printf("\n\n");
    for(int i = 0 ; i <3 ; i++ )
    {
        printf(" %i " , vetb[i]);
    }
    printf("\n\n");
}

void swap(int *a, int *b)
{
    int c ;
    c = *a;
    *a = *b;
    *b = c;
}

void swapVector(int a[], int b[], int size)
{   
    int c[3];
    for(int i = 0 ; i<size ; i++)
    {
        c[i] = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = c[i];
    }
}