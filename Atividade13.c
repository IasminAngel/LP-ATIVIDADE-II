#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numero1;
    int numero2; 

    printf("Digite dois numeros:");
    scanf("%d",&numero1);
    scanf("%d",&numero2);

    system("cls || clear"); 

    if (numero1 > numero2)
    {
        printf("Maior numero e o numero 1: %d\n",numero1);
        printf("Menor numero e o numero 2: %d\n",numero2);
    } else {
        printf("Menor numero e o numero 1: %d\n", numero1);
        printf("Maior numero e o numero 2: %d\n", numero2);
    }
    
}