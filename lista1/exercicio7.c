#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, c = 0; 

    printf("Digite um número inteiro n (maior ou igual a zero): ");
    scanf("%d", &n);

    if (n == 0) { 
        printf("O termo de ordem zero da sequência de Fibonacci é 0.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        c = a + b; 
        a = b;     
        b = c;
    }

    printf("O termo de ordem %d da sequência de Fibonacci é %llu.\n", n, a);

    return 0;
}