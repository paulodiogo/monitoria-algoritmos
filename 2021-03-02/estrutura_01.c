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

    Endereco endereco;    

    printf("1 - %s %s %d %s %s %s\n", endereco.TipoLogradouro, endereco.Logradouro, endereco.Numero, endereco.Bairro, endereco.Complemento, endereco.Referencia);

    strcpy(endereco.TipoLogradouro, "Rua");
    strcpy(endereco.Logradouro, "João");
    endereco.Numero = 333;
    strcpy(endereco.Bairro, "Centro");
    strcpy(endereco.Complemento, "Casa");
    strcpy(endereco.Referencia, "Casa verde");

    printf("2 - %s %s %d %s %s %s\n", endereco.TipoLogradouro, endereco.Logradouro, endereco.Numero, endereco.Bairro, endereco.Complemento, endereco.Referencia);    

    return 0;
}
