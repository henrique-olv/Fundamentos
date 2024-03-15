#include <stdio.h>
#include <stdlib.h>

  int main(){

    float f,c;

    printf("Digite os graus da temperatura em Fahrenheit:\n");
    scanf("%f",&f);

    c = (f-32) / 1.8;

    printf("Temperatura Fahrenheit equivalente em: %f graus celsius: \n",c);

    return 0;
  }