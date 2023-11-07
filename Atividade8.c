#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero; 
	int i; 
	
	printf("Seja bem-vindo, deseja ");
	
	printf("Numero para a contagem regressiva:\n");
	scanf("%d", &numero);

	for (i= numero; i >= 0; i--){
		
		printf ("%i ", i);
	}
}
