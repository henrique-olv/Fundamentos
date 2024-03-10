#include <stdio.h>
#include <stdlib.h>

  int main(){

    float taxa, valor, real,dolar;
    int opcao;

    taxa = 4.95;

    printf("Digite um valor:\n");
    scanf("%f",&valor);

    printf("\nPara converter de Real para Dolar digite: 1\nPara converter de Dolar para Real digite: 2\n\n");
    scanf("%d",&opcao);

    switch(opcao){
      case 1:
      dolar = valor / taxa;
      break;

      case 2:
      real = valor * taxa;
      break;

      default:
      printf("Opcao invalida\n");
    }

      if(opcao == 1){
        printf("\nValor convertido de real para dolar: %.2f dolares\n",dolar);
      }else if(opcao == 2){
        printf("\nValor convertido de dolar para real: %.2f reais\n",real);
      } 

    return 0;
  }