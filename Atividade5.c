#include <stdio.h>
#include <stdlib.h>

int main (){
	int idioma;
	
	printf("Qual idioma deseja ?\n");
	printf("(1) Ingles\n");
	printf("(2) Espanhol\n");
	printf("(3) Frances\n");
	scanf("%d", &idioma);
	
	switch(idioma){
	case 1:
		printf("Welcome!\n");
	break;
	case 2:
		printf("Bienvenida!\n");
	break; 
	case 3:
		printf("Accueillir!\n");
	
	break;
}
}