#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 100000

typedef struct Endereco
{
    char TipoLogradouro[N];
    char Logradouro[N];
    int Numero;
    char Bairro[N];
    char Complemento[N];
    char Referencia[N];
} Endereco;

int main(void)
{
    Endereco *enderecos[10];

    enderecos[0] = (Endereco *)malloc(sizeof(Endereco));   

    strcpy(enderecos[0]->TipoLogradouro, "Rya");

    printf("Nome => %s\n", enderecos[0]->TipoLogradouro);

    strcpy((*enderecos[0]).TipoLogradouro, "AUR");

    printf("Nome => %s\n", (*enderecos[0]).TipoLogradouro);

    return 0;
}
