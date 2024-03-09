#include <stdio.h>
#include <stdlib.h>

  int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    if(num % 2 == 0){
       printf("Divisivel por 2\n");
    } else if(num % 3  == 0 ){
       printf("Divisivel por 3\n");
    } else if(num % 5 == 0){
       printf("Divisivel por 5\n");
    } else {
       printf("Divisor diferentes de 2,3 ou 5\n");
    }

      printf("\nFim do programa.\n");

    return 0;
  }