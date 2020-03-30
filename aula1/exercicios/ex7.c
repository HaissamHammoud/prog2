#include<stdio.h>

#define tam 10

void cripto(char * string);

int main()
{
    char string[10];
    char *p;

    printf("entre com uma string\n");
    gets(string);

    cripto(string);
    printf("%s", string);

}

void cripto(char * string)
{
    int i = 0;
    while(*(string+i) != '\0')
    {
        if(*(string+i) == 'z' ||*(string+i) == 'p' )
        {
            *(string+i) = (*(string+i) =='z')? 'p': 'z';
        }
        else if(*(string+i) == 'e' || *(string+i) =='o' )
        {
            *(string+i) = (*(string+i) =='e')? 'o': 'e';
        }
        else if(*(string+i) == 'n' ||*(string+i) == 'l' )
        {
            *(string+i) = (*(string+i) == 'n')? 'l': 'n';
        }
        else if(*(string+i) == 'i' || *(string+i) =='a' )
        {
            *(string+i) = (*(string+i) =='i') ? 'a': 'i';
        }
        else if(*(string+i) =='t' ||*(string+i) == 'r' )
        {
            *(string+i) = (*(string+i) =='t') ? 'r': 't';
        }
        i++;
    }
}
