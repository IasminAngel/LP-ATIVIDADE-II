#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int temp; 
	
	printf("Seja bem-vindo ao mais novo jogo! Para saber o clima do local, digite a temperatura:\n");
	scanf("%d", &temp);
	
	if (temp > 25) {
	printf("Ensolarado.");
	} else if (temp < 15){
	printf("Chuvoso.");
    } else if (temp > 15 || temp < 25){
    printf("Nublado.");
	}
}
