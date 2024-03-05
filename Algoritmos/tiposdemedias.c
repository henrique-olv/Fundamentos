#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3, peso1, peso2, peso3, somaPesos, media;
    int opcao;

    printf("Digite 3 numeros:\n");
    scanf("%f%f%f", &num1, &num2, &num3);

    printf("Digite uma das opcoes de calculo\n");
    printf("Aritmetica: 1\nPonderada: 2\n");
    scanf("%d", &opcao);

    if (opcao > 2 || opcao < 0) {
        printf("Opcoes invalidas, inicialize o programa novamente\n");
        return 0;
    } else if (opcao == 1) {
        media = (num1 + num2 + num3) / 3;
        printf("Media: %.2f\n", media);
    } else if (opcao == 2) {
        printf("Informe os valores dos pesos:\n");
        scanf("%f%f%f", &peso1, &peso2, &peso3);
        somaPesos = peso1 + peso2 + peso3;
        if (somaPesos == 0) {
            printf("Erro, Soma dos pesos igual a zero, inicialize o programa novamente\n");
            return 0;
        }
        media = (num1 * peso1 + num2 * peso2 + num3 * peso3) / somaPesos;
        printf("Media: %.2f\n", media);
    }
    return 0;
}
