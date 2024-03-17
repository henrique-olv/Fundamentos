#include <stdio.h>
#include <stdlib.h>

  int main(){

    int numeros;

    for(numeros = 0; numeros <= 9999; numeros+=7){
      printf("%d ",numeros);
    }

    return 0;
  }