#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float preco;
	int dia;
	float calculo;
	float pagamento;
	
		
	printf("De acordo com o preco colocado, tera desconto, qual valor do produto ?\n");
	scanf("%f", &preco);
	
	printf("Em que dia da semana esta realizando essa compra ?\n");
	printf("(1) Segunda-feira\n");
	printf("(2) Terca-feira\n");
	printf("(3) Quarta-feira\n");
	printf("(4) Quinta-feira\n");
	printf("(5) Sexta-feira\n");
	printf("(6) Sabado\n");
	printf("(7) Domingo\n");	
	scanf("%d", &dia);
	
	switch(dia){
		
		case 1:
			if (preco >= 100){
			calculo= preco*0.1;
			pagamento = preco - calculo; 
			printf("Desconto recebido: %.1f\n", calculo);
			printf("Pagamento final:%.1f\n", pagamento);
			} else {
		    printf("Pagamento final:%.1f\n ", preco);
			}
		break; 
		
			case 2:
		if (preco >= 100){
			calculo= preco*0.1;
			pagamento = preco - calculo; 
			printf("Desconto recebido: %.1f\n", calculo);
			printf("Pagamento final:%.1f\n", pagamento);
			} else {
		    printf("Pagamento final:%.1f\n ", preco);
			}
		break; 
		
			case 3:
			if (preco >= 100){
			calculo= preco*0.1;
			pagamento = preco - calculo;
			printf("Desconto recebido: %.1f\n", calculo);
			printf("Pagamento final:%.1f\n", pagamento);
			} else {
		    printf("Pagamento final:%.1f\n ", preco);
			}
		break; 
		
			case 4:
			if (preco >= 100){
			calculo= preco*0.1;
			pagamento = preco - calculo; 
			printf("Desconto recebido: %.1f\n", calculo);
			printf("Pagamento final:%.1f\n", pagamento);
			} else {
		    printf("Pagamento final:%.1f\n ", preco);
			}
		break; 
		
			case 5:
			if (preco >= 100){
			calculo= preco*0.1;
			pagamento = preco - calculo; 
			printf("Desconto recebido: %.1f\n", calculo);
			printf("Pagamento final:%.1f\n", pagamento);
			} else {
		    printf("Pagamento final:%.1f\n ", preco);
			}
		break; 
		
		case 6:
			if(preco >= 100){
			calculo= preco*0.15;
			pagamento = preco-calculo;
			printf("Desconto recebido: %.1f\n", calculo);
			printf("Pagamento final:%.1f\n", pagamento);
			} else {
		    printf("Pagamento final:%.1f\n ", preco);
			}
			break;		
		case 7:	
 	        if (preco >= 100){
			calculo= preco*0.15;
			pagamento = preco - calculo;
			printf("Desconto recebido: %.1f\n", calculo);
			printf("Pagamento final:%.1f\n", pagamento);
			} else {
		    printf("Pagamento final:%.1f\n ", preco);
			}
		break;
		
		default:
			printf("Op��o escolhida indispon�vel");
		break;

	}
	
}