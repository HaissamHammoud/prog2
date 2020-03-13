#include<stdio.h>

void swap(int *a, int *b);
void swapVector(int a[], int b[], int size);
int main()
{
    int a = 1 , b = 2 ;
    int veta[2] = {1,2}, vetb[2]= {3,4};
    int * pa = &a;
    int * pb = &b;
    printf("%i   %i \n", a , b);
    swap(pa,pb);
    printf("%i   %i\n", a , b);

    printf("%i  %i      %i     %i   \n", veta[0], veta[1], vetb[0], vetb[1]);
    swapVector(veta, vetb,2);
    printf("%i  %i      %i     %i   \n", veta[0], veta[1], vetb[0], vetb[1]);
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
    int c[2];
    for(int i = 0 ; i<size ; i++)
    {
        c[i] = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = c[i];
    }
}