#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numero;
    int par=0; 
    int impar=0; 
    float soma;
    float somaimpar; 
    float somapar;  
    float media=0; 

       printf("Por favor, digite diversos numeros para prosseguirmos com calculos de pares e impares:\n");
    do
    {
       scanf("%d", &numero);  

       if (numero %2 == 0)
       {
        par++;
        somapar+= numero;
       } else if (numero %2 == 1 ) {
        impar++;
        somaimpar+= numero;
       } else if (numero <0) {
        break;
       }
        

       } while (numero > 0);
       soma= par+impar; 
       media= (somapar + somaimpar) / soma; 
    
        printf("Media dos numeros pares e impares:%.1f \n", media);
        printf("Numeros pares:%d\n", par);
        printf("Numeros impares:%d\n", impar);
}
