#include <stdio.h>

int verificarpar(int numero) {
    while (numero > 1) {
        numero -= 2;
    }
    return numero==0;
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (verificarpar(numero)) {
        printf("%d e par.\n", numero);
    } else {
        printf("%d e impar.\n", numero);
    }

    return 0;
}

