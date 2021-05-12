void Ordena(Pilha * p){

  Fila aux;
  ConstroiFila(&aux);

  int N = 0;  

  while(N != p->Tamanho){

    int MAXIMO = p->Tamanho - N;
    int IMPAR = -1;

    for(int i = 0; i < MAXIMO; i++){
      int VALOR = Desempilha(p);

      if(VALOR % 2 == 1){
        IMPAR = VALOR;        
      }
      
      Enfileira(&aux, VALOR);
      
    }        

    if(IMPAR != -1){
      Empilha(p, IMPAR);
    }

    while(aux.Tamanho != 0){
      int atu = Desenfileira(&aux);

      if(atu != IMPAR)
        Empilha(p, atu);
    }

    N++;
    
  }
}