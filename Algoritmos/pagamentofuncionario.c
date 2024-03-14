#include <stdio.h>
#include <stdlib.h>

  int main(){

    int diasDeTrabalho;
    float valorFinal, descontoImposto = 8,valorDiaFuncionario, calculoDesconto;

    printf("Informe o, valor dia do funcionario:\n");
    scanf("%f",&valorDiaFuncionario);
    printf("Informe a quantidade de dias trabalhados:\n");
    scanf("%d",&diasDeTrabalho);
    
    calculoDesconto = (diasDeTrabalho * valorDiaFuncionario *  descontoImposto) / 100;
    valorFinal = diasDeTrabalho * valorDiaFuncionario - calculoDesconto;

    printf("\nValor a pagar: %0.2f\n",valorFinal);
    
    return 0;
  }