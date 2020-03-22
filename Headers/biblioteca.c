#include<stdio.h>

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b ;
	*b = c;
}

void append(int * a , int entrada, int *tamanho)
{
	printf("\ntamanho interno : %d\n", *tamanho);
	printf("\nendereço do vetor: %d\n", &a);
	printf("\nendereco tamanho : %d\n", &tamanho);
	printf("\nendereco entrada : %d\n", &entrada);
	int indice = *tamanho;
	*(a + *tamanho) = entrada;
	*tamanho=  *(tamanho) + 1 ;
	printf("\ntamanho interno : %d\n", *(tamanho));
}

int * agregate(int *a , int *b, int tamA, int tamB)
{
	int vet[tamA + tamB];
	int i = 0;
	for(i = 0 ; i < tamA ; i++)
	{
		vet[i] = *a+i;
	}
	for(i = tamA ; i < tamA+tamB ; i++)
	{
		vet[i] = *a+i;
	}
	return vet;
}
