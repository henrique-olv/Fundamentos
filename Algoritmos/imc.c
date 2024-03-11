#include <stdio.h>
#include <stdlib.h>

  int main(){

    float imc, peso, altura;

    printf("Digite seu peso:\n");
    scanf("%f",&peso);
    printf("Digite sua altura:\n");
    scanf("%f",&altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
      printf("Abaixo do peso\n");
    }else if( imc >= 18 && imc < 25){
      printf("Peso Normal\n");
    }else if(imc >= 25 && imc < 30){
      printf("Excesso de peso\n");
    }else if(imc >= 30 && imc < 35){
      printf("Obesidade grau 1\n");
    }else if(imc >= 35 && imc < 40){
      printf("Obesidade grau 2\n");
    }else{
      printf("Obesidade grau 3\n");
    }

    printf("Imc: %.2f\n",imc);

    return 0;
  }