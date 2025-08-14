#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Menu de operacoes\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if (opcao == 1) {
            resultado = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
        } else if (opcao == 2) {
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
        } else if (opcao == 3) {
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
        } else if (opcao == 4) {
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero nao permitida!\n");
            }
        }
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
