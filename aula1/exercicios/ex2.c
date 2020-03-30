#include<stdio.h>

int main()
{
    int numero;
    int *p;
    p = &numero;

    printf("Entre com um numero\n");
    scanf("%d", p);

    printf("Valor %d\n", *p);
    printf("endereco %d\n", p);
}