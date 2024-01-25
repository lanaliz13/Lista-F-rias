#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificarprimo(int n){

	if ((n%2==0)) {
        printf("%d não é primo\n", n);
    } else {
        printf("%d é primo\n", n);
    }


	return n;
}

int verificarparidade(int k){
	
	if(k%2==0){
		printf("E %d também é par", k);
	}else{
		printf("Já que é primo o %d é obrigatoriamente ímpar", k);
	}
	
	return k;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	
	printf("Digite um valor: ");
	scanf("%d", &valor); 
	
	printf("", verificarprimo(valor));
	printf("", verificarparidade(valor));
	


    return 0;
}
	

