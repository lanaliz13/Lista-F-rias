#include<stdio.h>

int fatorial(int K){
   int X;
   for( X=K-1;X>=1; X--){

   	K*=X;
   }
	
	return K;

}


int main(){
	int number;
	int r;
	
	
	printf("Digite um numero inteiro para ser efetuado o calculo do fatorial desse numero:  \n");
	scanf("%d", &number);
	
	r = fatorial(number);
	
	printf("O fatorial de %d e igual a: %d", number, r);
                
	
	return 0;
}
