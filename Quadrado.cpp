#include<stdio.h>
#include<locale.h>
#include<math.h>


int quadrado(int n){
	
	int resultado = pow(n,2);
	
	return resultado;
}

int main(){

setlocale(LC_ALL, "Portuguese");
int N, resultado;
int X;


do{
	
	printf("Digite um n�mero para que o quadrado deste n�mero seja calculado: \n ");
	scanf("%d", &N);
	
	resultado = quadrado(N);
	
	printf("O resultado de %d ao quadrado � igual a: %d\n\n\n", N, resultado );
	
	printf("Deseja efetuar um novo calculo? Responda com 1 para SIM e e para N�O: \n");
	scanf("%d", &X);
	
} while( X == 1);

printf("Programa finalizado!!");



return 0;

}
