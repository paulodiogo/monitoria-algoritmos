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

typedef struct Contato
{
    char Nome[N];
    char Email[N];    
    Endereco Comercial;
    Endereco Residencial;
} Contato;

int main(void)
{

    Contato contato;   

    printf("1 - %s %s \n", contato.Nome, contato.Email);

    strcpy(contato.Nome, "Maria");
    strcpy(contato.Email, "MARIA@gmail.com");

    strcpy(contato.Comercial.TipoLogradouro, "Rua");
    strcpy(contato.Comercial.Logradouro, "João");
    contato.Comercial.Numero = 333;
    strcpy(contato.Comercial.Bairro, "Centro");
    strcpy(contato.Comercial.Complemento, "Casa");
    strcpy(contato.Comercial.Referencia, "Casa verde");

    printf("2 - %s %s %s %s %d %s %s %s \n", contato.Nome, contato.Email, contato.Comercial.TipoLogradouro, contato.Comercial.Logradouro, contato.Comercial.Numero, contato.Comercial.Bairro, contato.Comercial.Complemento, contato.Comercial.Referencia);   

    return 0;
}
