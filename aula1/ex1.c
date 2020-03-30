#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[50];
    float price;
}prod;

void AddNewProduct(prod products[] , int quantProduct );
void AddNewStock(int *stock ,int quantLojas, int quantProduct, prod product[]);
void PrintStock(int *stock, int quantLojas, int quantProduct, prod product[]);
void ExibirRelatorioStock(int *stock, int quantLojas, int quantProducts, prod products[]);
void menu();

int main()
{ 
    int quantProduct, quantLojas;
    //get info
    printf("Informe a quantidade de produtos");
    scanf("%i", &quantProduct);

    printf("Informe a quantidade de Lojas");
    scanf("%i",&quantLojas);
    
    //recolhe os dados
    prod products[quantProduct];
    int stock[quantLojas][quantProduct];
    //alimenta as tabelas
    printf("Insira os produtos da loja");
    AddNewProduct(products, quantProduct);
    AddNewStock(*stock,quantLojas,quantProduct,products);
    PrintStock(*stock, quantLojas,quantProduct, products);
    ExibirRelatorioStock(*stock, quantLojas,quantProduct, products);

}

void menu()
{
}

void AddNewProduct(prod products[] , int quantProduct )
{
    for (int i = 0; i < quantProduct; i++)
    {
        printf("\n\nProduto %i \n", i+1);
        printf("nome :");
        scanf("%s", products[i].name);
        printf("Preco: ");
        scanf("%f", &products[i].price);
    }
    printf("Cadastro concluido");
}
void AddNewStock(int *stock ,int quantLojas, int quantProduct, prod product[])
{
    printf("Insira o Stock dos produos para cada empresa");
    for(int i = 0 ; i < quantLojas ; i++)
    {
        printf("Entre com as informacoes da loja %i \n" , i+1);
        for (int j = 0; j < quantProduct; j++)
        {
            printf("insira a quantidade do produto %s \n", product[j].name);
            scanf("%i", &*(stock+(i*quantProduct+j)));
        }
    printf("\n");
    }
}
void PrintStock(int *stock, int quantLojas, int quantProduct, prod product[])
{
    printf("Exibindo relatorio de stock da empresa");
    for (int i = 0; i < quantLojas; i++)
    {
        printf("Loja %i : ", i);
        for (int j = 0; j < quantProduct; j++)
        {
            printf(" %i  ", *(stock+(i*quantProduct+j)));
        }      
        printf("\n");
    } 
}
void ExibirRelatorioStock(int *stock, int quantLojas, int quantProducts, prod products[])
{
    int totalProducts[quantProducts], menosProduct , maisProducts,sum ,i,j;
    printf("Exibindo o estoque de todas as lojas: \n");
    PrintStock(stock, quantLojas,quantProducts,products);
    printf("Produto com menos stock nas lojas: ");

    for (i = 0; i < quantLojas; i++)
    {
        sum = 0;
        for (j = 0; j < quantProducts; j++)
        {
            sum = sum + *(stock+(i*quantProducts+j));
            totalProducts[j] = totalProducts[j] +  *(stock+(i*quantProducts+j));
        }      
    } 
    for(i = 0 ; i<quantProducts; i++)
    {
        printf("\n %i  ",totalProducts[i]  );
    }
}

