#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int Senha(char S[]) {
    int n, letramaiuscula = 0, letraminuscula = 0, quantnumero = 0, caractereespecial = 0;
    if (strlen(S) < 8) {
        return 0;
    }
    for (n = 0; S[n] != '\0'; n++) {
        if (isupper(S[n])) {
            letramaiuscula = 1;
        } else if (islower(S[n])) {
            letraminuscula = 1;
        } else if (isdigit(S[n])) {
            quantnumero = 1;
        } else if (!isalnum(S[n])) {
            caractereespecial = 1;
        }
    }

    return letramaiuscula;
    return letraminuscula;
    return quantnumero;
    return caractereespecial;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    char senha[50];

    printf("Informe a senha: ");
    scanf("%c", senha);

    if (Senha(senha)) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida!\n");
    }

    return 0;
}
