#include <stdio.h>

int main() {
    int opcao, quantidade;
    float valor_total = 0;

    printf("Bem-vindo à loja de frutas!\n");

    while (1) {
        printf("\nEscolha uma fruta:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("0 => Finalizar compra\n");
        printf("Opção escolhida: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        switch (opcao) {
            case 1:
                valor_total += quantidade * 5.0;
                break;
            case 2:
                valor_total += quantidade * 1.0;
                break;
            case 3:
                valor_total += quantidade * 4.0;
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    printf("\nValor total da compra: R$%.2f\n", valor_total);

    return 0;
}