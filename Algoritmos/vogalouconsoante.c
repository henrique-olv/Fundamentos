#include <stdio.h>
#include <stdlib.h>

  int main(){

    char letra;

    printf("Digite uma letra do alfabeto:\n");
    scanf("%c",&letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
      printf("Vogal: %c\n",letra);
    } else{
      printf("Consoante: %c\n",letra);
    }

    return 0;
  }