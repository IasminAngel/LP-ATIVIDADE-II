#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero;
	int i; 
	int resultado;
    int resposta; 
	
	printf("Para saber se o numero e primo, digite:\n");
	scanf("%d", &numero);
	
	for (i=1; i <= numero ; i++){
		if (numero % i == 0) {
			resultado++;
		}
	}

    printf ("Deseja saber a resposta ?\n");
     printf ("(1) Sim\n");
     scanf("%d", &resposta); 
    switch (resposta)
    {
    case 1:
     
	if (resultado == 2){
		printf("Numero primo");
	} else {
		printf("Nao e primo");
	}
        break;
    }
	
}
