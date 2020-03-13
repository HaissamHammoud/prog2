#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);
void swapVector(int a[], int b[]);
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

    printf("%i  %i      %i     %i   \n", veta[0], veta[1], vetb[0], vetb[1]);
    swapVector(veta, vetb);
    printf("%i  %i      %i     %i   \n", veta[0], veta[1], vetb[0], vetb[1]);
}

void swap(int *a, int *b)
{
    int c ;
    c = *a;
    *a = *b;
    *b = c;
}

void swapVector(int a[], int b[])
{
    int sizea= sizeof(*a)/ sizeof(1);
    int c[2];
    for(int i = 0 ; i<sizea ; i++)
    {
        c[i] = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = c[i];
    }
}