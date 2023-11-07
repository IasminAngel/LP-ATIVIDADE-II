#include <stdio.h>
#include <stdlib.h>

int main(){
	int escolha;
	
	printf("Lojinha virtual da Angel! :D\n");
	printf("(1) Camisa do time \n");
	printf("(2) Calca da Nike\n");
	printf("(3) Sapato da Adidas\n");	
	printf("(4) Camisa da loja :D \n");
	scanf("%i", &escolha);
	
	switch(escolha){
		case 1:
			printf("Espero que seja do Bahia, o preco da camisa e 40 reais");
			break; 
		case 2:
			printf("O preco da calca e 120 reais");
			break; 
		case 3:
			printf("O preco do sapato 90 reais");
			break; 
		case 4:
			printf("O preco da camisa da loja e 400 reais");
			break; 
	}
}