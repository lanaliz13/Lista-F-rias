#include <stdio.h>
#include <locale.h>

float ATV() {
    float atvfeita;
    float atvnaoconcluida;

    printf("Informe o número de atividades realizadas: \n");
    scanf("%f", &atvfeita);

    printf("Informe o número de atividades não concluídas: \n");
    scanf("%f", &atvnaoconcluida);

    float notaatividade = (atvfeita / atvnaoconcluida) * 10;

    return notaatividade;
}

float media() {
    float notaescrita, notapratica, notaatividade;

    printf("Informe a nota das atividades escritas:\n");
    scanf("%f", &notaescrita);

    printf("Informe a nota das atividades práticas: \n");
    scanf("%f", &notapratica);

    notaatividade = ATV();  // Chama a função ATV para obter a nota da atividade
    float MediaBimestral = (notaescrita + notapratica + notaatividade) / 3;

    return MediaBimestral;
}

float mediaf(float mediaf1, float mediaf2, float mediaf3, float mediaf4) {
    float mediafinal;
    mediafinal = ((mediaf1 * 2) + (mediaf2 * 3) + (mediaf3 * 2) + (mediaf4 * 3)) / 10;
    return mediafinal;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float PrimeiroBimestre, SegundoBimestre, TerceiroBimestre, QuartoBimestre;

    printf("Nota do primeiro bimestre: \n");
    PrimeiroBimestre = media();

    printf("Nota do segundo bimestre: \n");
    SegundoBimestre = media();

    printf("Nota do terceiro bimestre: \n");
    TerceiroBimestre = media();

    printf("Digite a nota do quarto bimestre: \n");
    QuartoBimestre = media();

    printf("Aqui estão as notas bimestrais: \n");
    printf("Nota do primeiro bimestre: %.3f\n", PrimeiroBimestre);
    printf("Nota do segundo bimestre: %.3f\n", SegundoBimestre);
    printf("Nota do terceiro bimestre: %.3f\n", TerceiroBimestre);
    printf("Nota do quarto bimestre: %.3f\n", QuartoBimestre);

    float final = mediaf(PrimeiroBimestre, SegundoBimestre, TerceiroBimestre, QuartoBimestre);
    printf("A média final é igual a: %.3f\n", final);

    return 0;
}
