void Inverter(Pilha * pilha){

  Pilha p;
  Constroi(p);

  for(int i = 0; i < pilha->Tamanho; i++){
    int chave = Desempilha(pilha);

    while(pilha->Tamanho > 0){
      Empilha(p, Desempilha(pilha));
    }  
    Empilha(p, chave);    
  }    

  while(p->Tamanho > 0){
    Empilha(pilha, Desempilha(p));
  } 
}