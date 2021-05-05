#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int Elemento;    
    struct No * Proximo;
    struct No * Anterior;
} No;

typedef struct Deque
{
  struct No * Inicio;  
  struct No * Fim; 
  int Tamanho;
} Deque;

void Constroi(Deque * deque){
  (*deque).Inicio = NULL;
  (*deque).Fim = NULL;
  (*deque).Tamanho = 0;
}

void Imprimir(Deque * deque){
   No * no = (*deque).Inicio;

   while(no != NULL){
     printf("%d ", (*no).Elemento);
     no = (*no).Proximo;
   }
   printf("\n");
}

void InsereInicio(Deque * deque, int elemento){
  
  No * novo = (No *) malloc(sizeof(No));
  (*novo).Elemento = elemento;
  (*novo).Proximo = NULL;
  (*novo).Anterior = NULL;

  if((*deque).Inicio == NULL){
    (*deque).Inicio = novo;
    (*deque).Fim = novo;
  }else{
    (*novo).Proximo = (*deque).Inicio;    
    (*deque).Inicio = novo;
  }
  (*deque).Tamanho++;
}

void InsereFim(Deque * deque, int elemento){
  
  No * novo = (No *) malloc(sizeof(No));
  (*novo).Elemento = elemento;
  (*novo).Proximo = NULL;

  if((*deque).Inicio == NULL){
    (*deque).Inicio = novo;
    (*deque).Fim = novo;
  }else{
    (*(*deque).Fim).Proximo = novo;
    (*novo).Anterior = (*deque).Fim;
    (*deque).Fim = novo;
  }
  (*deque).Tamanho++;
}

int RemoveInicio(Deque * deque){

  if((*deque).Tamanho == 0)
    return -1;
  
  No * noRemovido = (*deque).Inicio;

  int elemento = (*noRemovido).Elemento;

  (*deque).Inicio = (*noRemovido).Proximo;

  free(noRemovido);

  (*deque).Tamanho--;
  
  return elemento;

}

int RemoveFim(Deque * deque){

  if((*deque).Tamanho == 0)
    return -1;
  
  No * noRemovido = (*deque).Fim;

  int elemento = (*noRemovido).Elemento;

  (*deque).Fim = (*noRemovido).Anterior;

  (*(*deque).Fim).Proximo = NULL;

  free(noRemovido);

  (*deque).Tamanho--;
  
  return elemento;

}

int BuscaInicio(Deque * deque){

  if((*deque).Tamanho == 0)
    return -1;
  
  return (*(*deque).Inicio).Elemento;
}

int BuscaFim(Deque * deque){

  if((*deque).Tamanho == 0)
    return -1;
  
  return (*(*deque).Fim).Elemento;
}


int main(void) {
  
  Deque deque;

  Constroi(&deque);

  InsereInicio(&deque, 1);
  printf("Inicio = %d Fim %d\n", BuscaInicio(&deque), BuscaFim(&deque));
  InsereInicio(&deque, 2);
  printf("Inicio = %d Fim %d\n", BuscaInicio(&deque), BuscaFim(&deque));
  InsereInicio(&deque, 3);
  printf("Inicio = %d Fim %d\n", BuscaInicio(&deque), BuscaFim(&deque));
  InsereFim(&deque, 4);
  printf("Inicio = %d Fim %d\n", BuscaInicio(&deque), BuscaFim(&deque));
  InsereFim(&deque, 6);
  printf("Inicio = %d Fim %d\n", BuscaInicio(&deque), BuscaFim(&deque));
  RemoveInicio(&deque);  
  printf("Inicio = %d Fim %d\n", BuscaInicio(&deque), BuscaFim(&deque));
  RemoveFim(&deque);  
  printf("Inicio = %d Fim %d\n\n", BuscaInicio(&deque), BuscaFim(&deque));

  Imprimir(&deque);

  return 0;
}
