#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    while (num >= 0) {
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        printf("Digite outro número inteiro (ou um número negativo para sair): ");
        scanf("%d", &num);
    }

    printf("O maior número lido foi %d e o menor foi %d.\n", maior, menor);

    return 0;
}