#include <stdio.h>
#include <stdlib.h>

  int main(){

    int num,positivos = 0,negativos = 0;

    for(int i = 0;i < 5;i++){
      printf("Digite um numero:\n");
      scanf("%d",&num);
      if(num > 0){
         positivos += 1;
      }else {
        negativos = negativos - 1;
      }
    }
    
    printf("Total de positivos: %d\n",positivos);
    printf("Total de negativos: %d\n",negativos);

    return 0;
  }

