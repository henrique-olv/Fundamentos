#include <stdio.h>
#include <stdlib.h>

  int main(){

    float nota1, nota2, media;

    printf("insira as notas dentro do intervalo de 0 a 10\n");
    printf("Digite as duas notas:\n");
    scanf("%f%f",&nota1,&nota2);

    while((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10)){
      printf("Notas invalidas, digite as notas novamente:\n");
      scanf("%f%f",&nota1,&nota2);
    }

    media = (nota1 + nota2) / 2;

    printf("Nota final: %.2f \n",media);

    return 0;
  }