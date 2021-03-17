#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 100000

typedef struct No
{
    int matricula;
    struct No* proximo;
} No;

No * CarregarLista(){
    No Alunos[3];

    Alunos[0].matricula = 123;
    Alunos[1].matricula = 456;
    Alunos[2].matricula = 789;

    Alunos[0].proximo = &Alunos[1];
    Alunos[1].proximo = &Alunos[2];
    Alunos[2].proximo = NULL;

    //WARNING
    return &Alunos[0];
}


int main(void)
{
    No* p = CarregarLista();

    printf("%d\n", (*(*(*p).proximo).proximo).matricula);

    return 0;
}
