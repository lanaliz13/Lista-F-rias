#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificarprimo(int n){

	if ((n%2==0)) {
        printf("%d n�o � primo\n", n);
    } else {
        printf("%d � primo\n", n);
    }


	return n;
}

int verificarparidade(int k){
	
	if(k%2==0){
		printf("E %d tamb�m � par", k);
	}else{
		printf("J� que � primo o %d � obrigatoriamente �mpar", k);
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
	

