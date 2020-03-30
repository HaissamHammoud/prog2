#include<stdio.h>

void printvet(int *vet, int tamanho);
void swap(int * vet1 , int * vet2 , int tamanho);

int main()
{
    int vet1[3] = {1,2,3}, vet2[3] = {7,8,9};
    int *p1, *p2 ;
    p1 = vet1;
    p2 = vet2;
    swap(p1, p2, 3);
    printvet(p1,3);
    printvet(p2,3);
}

void swap(int * vet1 , int * vet2 , int tamanho)
{
    int  i , temp;
    for(i = 0 ; i< tamanho; i++)
    {
        temp = *(vet1+i);
        *(vet1+i) = *(vet2+i);
        *(vet2+i) = temp; 
    }
}

void printvet(int *vet, int tamanho)
{
    int i;
    for(i = 0 ; i< tamanho ; i++ )
    {
        printf(" %d ", *(vet+i));
    }
    printf("\n ", *(vet+i));
}