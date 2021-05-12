void Ordena(Pilha * p){

  Pilha aux;
  ConstroiPilha(&aux);

  int N = 0;  

  while(N != p->Tamanho){

    int MAXIMO = p->Tamanho - N;
    int MAIOR = 400000;

    for(int i = 0; i < MAXIMO; i++){
      int VALOR = Desempilha(p);

      if(VALOR <= MAIOR){
        MAIOR = VALOR;        
      }

      Empilha(&aux, VALOR);      
    }        

    if(MAIOR != -1){
      Empilha(p, MAIOR);
    }

    while(aux.Tamanho != 0){
      int atu = Desempilha(&aux);

      if(atu != MAIOR)
        Empilha(p, atu);
    }
    
    N++;
    
  }
}