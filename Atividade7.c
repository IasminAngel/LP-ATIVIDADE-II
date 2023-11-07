#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int escolha; 
	int tiro;
	int arma; 
	char nome [500];
	char adjetivo [500];
	int brilho; 
	
		
		printf("SEJA BEM-VINDO JOGADOR! Este jogo consiste em tentativas de tiros, havera inimigos e a quantia de balas selecionadas pode derrota-lo, vamos la!\n");
		printf("(1) Novo jogo\n");
		printf("(2) Carregar jogo\n");
		printf("(3) Configuracoes\n");
		scanf("%d", &escolha);
		
		switch (escolha) {
		case 1:
			fflush (stdin); 
			printf("Qual o nome do seu atirador ?\n"); 
			gets (nome);
			printf("Um adjetivo para seu personagem\n");
			gets (adjetivo);
		
			fflush (stdin); 
			printf("Ok senhor(a), %s, voce esta procurando alguma arma para enfrentar bandidos que sairam da prisao recentemente, qual arma escolhera ?\n", nome);
			printf("(1) Escopeta\n");
			printf("(2) Rifle\n");
			printf("(3) Pistola\n");
			scanf ("%i", &arma);
			fflush (stdin); 
			
		switch (arma){
			case 1:
				printf("Voce escolheu a escopeta\n");
			break;
			case 2:
				printf("Voce escolheu o rifle\n");
			break;
			case 3:
				printf("Voce escolheu a pistola\n");
			break; 
		}
			
			printf("Entao, o grande atirador, %s, saiu para suas aventuras carregando a sua arma, ele e %s, em seu caminho logo em cima de uma colina, ha um bandido indo roubar um vilarejo, hora de atirar!", nome, adjetivo);
			printf("Limite de 50 tiros.\n");
			scanf("%d", &tiro);
			
			if(tiro == 34) {
				printf("E ASSIM! %s SAI VITORIOSO!\n");
			} else {
				printf("Infelizmente o voce morreu :( \n");
			}
			
		break;
		
			case 2:
		    printf("Ok senhor(a), voce esta procurando alguma arma para enfrentar bandidos que sairam da prisao recentemente, qual arma escolhera ?\n");
			printf("(1) Escopeta\n");
			printf("(2) Rifle\n");
			printf("(3) Pistola\n");
			scanf("%d", &arma);
			
		switch (arma){
			case 1:
				printf("Voce escolheu a escopeta\n");
			break;
			case 2:
				printf("Voce escolheu o rifle\n");
			break;
			case 3:
				printf("Voce escolheu a pistola\n");
			break; 
	}
			printf("Entao, o grande atirador, saiu para suas aventuras carregando a sua arma, em seu caminho logo em cima de uma colina, ha um bandido indo roubar um vilarejo, hora de atirar!");
			printf("Limite de 50 tiros.\n");
			scanf("%d", &tiro);
			
			if(tiro == 34) {
				printf("E ASSIM! SAI VITORIOSO!\n");
			} else {
				printf("Infelizmente o voce morreu :( \n");
			}
		
			break; 
		
		case 3:
			printf("Ajuste de brilho de 0 a 100:\n");
			scanf("%d", &brilho);
			
			if(brilho > 100){
				printf("Nao ha esse valor\n");
			} 	
			
	}
			
	
}
