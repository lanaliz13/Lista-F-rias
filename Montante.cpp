#include<stdio.h>
#include<locale.h>

int montante(int c, int t, int i){
	
	int M;
	
	M = c + c*i*t;
	
	return M;
}




int main(){
	setlocale(LC_ALL, "Portuguese");
	int C, T, I, Montante;
	
	printf("Informe o capital inicial: \n");
	scanf("%d", &C);
	printf("Informe a taxa de juros: \n");
	scanf("%d", &I);
	printf("Informe o tempo de aplica��o: \n");
	scanf("%d", &T);
	
	Montante = montante(C, I, T);
	
	printf("O resultado do c�lculo �: %d", Montante);
	
	return 0;
	
}
