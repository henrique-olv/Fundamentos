#include <stdio.h>
#include <stdlib.h>

  int main(){

    int i,numero;

    printf("Digite o numero da tabuada desejada: ");
    scanf("%d",&numero);

    for(i = 1; i <= 10; i++){
        printf("%d x %d: %d\n",numero, i , i * numero);
    }

    return 0;
  }