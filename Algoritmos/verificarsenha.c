#include <stdio.h>
#include <stdlib.h>

  int main(){
    
    int senha;

      printf("Digite sua senha:\n");
      scanf("%d",&senha);

      while(senha != 123456){
        printf("Senha invalida, digite novamente:\n");
        scanf("%d",&senha);
      }
        printf("Acesso permitido\n");

    return 0;
  }