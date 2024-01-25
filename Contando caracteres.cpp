#include <stdio.h>


void contandocaracteres(char frase[]);

int main() {
    char frase[900];

    printf("Escreva uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    contandocaracteres(frase);

    return 0;
}

void contandocaracteres(char frase[]) {
    int casos[300] = {0};

    for (int contador = 0; frase[contador] != '\0'; contador++) {
        if (frase[contador] != ' ') {
            casos[(int)frase[contador]]++;
        }
    }

    printf("Número de casos de caracteres: \n");
    for (int contador = 0; contador < 300; contador++) {
        if (casos[contador] > 0) {
            printf("%c: %d\n", (char)contador, casos[contador]);
        }
    }
}
