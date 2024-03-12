#include <stdio.h>
#include <stdlib.h>

  int main(){

  int x,y,auxiliar;

  printf("Digite o valor de X e Y:\n");
  scanf("%d%d",&x,&y);

  printf("Valor de X: %d, Valor de Y: %d\n",x,y);
  
  auxiliar = x;
  x = y;
  y = auxiliar;

  printf("Valor de X: %d, Valor de Y: %d\n",x,y);
  
  return 0;

  }


  