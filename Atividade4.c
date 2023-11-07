#include <stdio.h>
#include <stdlib.h>

int main (){
	int acesso; 
	
	printf("Para verificacao de seguranca, digite sua idade:\n");
	scanf("%d", &acesso);
	
	if(acesso >= 18){
		printf("Acesso permitido");
	} else {
		printf("Acesso negado");
	}
}