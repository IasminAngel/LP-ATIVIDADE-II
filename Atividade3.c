#include <stdio.h>
#include <stdlib.h>

int main (){
	float nota; 
	
	printf("Para saber a classifica��o da sua nota:\n");
	scanf("%f", &nota);
	
	if(nota >= 9){
		printf("Nota otima");
	} else if (nota >= 7 && nota <= 8.9){
		printf("Nota boa");
	} else if (nota >= 5 && nota <= 6.9){
		printf("Nota razoavel");
	} else {
		printf("Insuficiente");
	}
}