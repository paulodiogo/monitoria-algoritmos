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
    struct Endereco *Comercial;
    struct Endereco *Residencial;
} Contato;

int main(void)
{
    Endereco *comercial, *residencial;
    comercial = (Endereco *)malloc(sizeof(Endereco));
    residencial = (Endereco *)malloc(sizeof(Endereco));

    Contato contato;
    strcpy(contato.Nome, "Paulo Leao");
    strcpy(contato.Email, "opaulodiogo@gmail.com");
    contato.Comercial = comercial;
    contato.Residencial = residencial;

    strcpy((*contato.Comercial).TipoLogradouro, "Rya");
    strcpy((*contato.Comercial).Logradouro, "dos Doydos");
    (*contato.Comercial).Numero = 8;
    strcpy((*contato.Comercial).Bairro, "Jorgy");
    strcpy((*contato.Comercial).Complemento, "Ay 99");
    strcpy((*contato.Comercial).Referencia, "Ao lado do telefony");

    strcpy((*contato.Residencial).TipoLogradouro, "Rua");
    strcpy((*contato.Residencial).Logradouro, "dos Coqueiros");
    (*contato.Residencial).Numero = 379;
    strcpy((*contato.Residencial).Bairro, "Gusmao");
    strcpy((*contato.Residencial).Complemento, "Casa");
    strcpy((*contato.Residencial).Referencia, "Ao lado do bar da Nega");

    printf("Nome => %s\n", contato.Nome);
    printf("Email => %s\n", contato.Email);

    printf("Comercial => %s %s %d %s %s %s\n", (*contato.Comercial).TipoLogradouro, (*contato.Comercial).Logradouro, (*contato.Comercial).Numero,
           (*contato.Comercial).Bairro, (*contato.Comercial).Complemento, (*contato.Comercial).Referencia);

    printf("Residencial => %s %s %d %s %s %s\n", (*contato.Residencial).TipoLogradouro, (*contato.Residencial).Logradouro, (*contato.Residencial).Numero,
           (*contato.Residencial).Bairro, (*contato.Residencial).Complemento, (*contato.Residencial).Referencia);

    return 0;
}
