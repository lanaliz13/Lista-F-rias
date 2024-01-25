#include<stdio.h>
#include<locale.h>



int anobissexto(int ano){
   
    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
    
}
    
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano;
	
	printf("Digite um ano para verificar se ele � bissexto: ");
	scanf("%d", &ano);
	
	if(anobissexto(ano)){
		
		printf("O ano � bissexto!");
	}else{
		printf("O ano n�o � bissexto");
	}
	
	return 0;
}

