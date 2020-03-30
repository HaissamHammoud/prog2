#include<stdio.h>

void swap(int *a, int *b);

int main()
{
	//declaração e afins
	int a = 1,b=2;
	int *p = &a;
	swap(&a,&b);
	printf("%d\n", a);
	printf("%d\n", b);
	
	//aritmetica de ponteiros
	int vet[] = {1,2,3} ;
	printf("%d\n", sizeof(vet));
	int i = 0;
	for(i =  0 ; i<3 ; i++)
	{
		printf("%d" , *(vet+i));
	}
	//
	//
	//

}

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = *&c;
}

