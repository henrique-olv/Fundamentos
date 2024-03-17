#include <stdio.h>
#include <stdlib.h>

  int main(){

    float polegadas, cm;
    
    printf("Digite a medida em polegadas\n");
    scanf("%f",&polegadas);

    cm = polegadas * 2.54;

    printf("Valor convertido para cm: %.2f\n",cm);

    return 0;
  }