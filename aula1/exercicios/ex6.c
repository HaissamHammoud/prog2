#include<stdio.h>
#define tam 40

int main()
{
    char string[tam];
    char *p ;
    int i;
    p = &string[tam-1];

    printf("Entre com uma string\n");
    gets(string);

    for(i = 0 ; i >(tam * -1); i--)
    {
        printf("%c", *(p+i));
        //p--;
    }
}