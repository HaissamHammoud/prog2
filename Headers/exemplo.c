#include<stdio.h>
#include "biblioteca.h"

void swap(int* a , int* b);
void append(int * a, int entrada, int *tamanho);

int main()
{
	printf("ola");
	int a = 1 , b = 2, tam =0, i=0;
	int vet[40];
	int *pa , *pb , *ptam , *pvet;
	pa = &a;
	pb = &b;
	ptam = &tam;
	pvet = vet;

	swap(pa,pb);
	
	printf("%d  %d", a , b);
	swap(&a,&b);
	printf("%d  %d", a , b);
	
	append(vet,2,ptam);
	append(vet,3,ptam);
	append(vet,4,ptam);
	append(vet,5,ptam);
	printf("\ntam %d" ,tam);
	for(i = 0; i<tam;i++)
	{
		printf("\nvet %d" ,vet[i]);
	}
	
}
