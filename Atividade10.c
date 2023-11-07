#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char escolha;
    int numero2; 
    float soma = 0;
    float subtracao;
    int i;

    // O código foi feito inicialmente com "for", entretanto a operação negativa aplicou soma ao invés de subtrair

    printf("Escolha dois numeros:\n");
        scanf("%d", &numero);
        scanf("%d", &numero2);
        soma= numero + numero2;
        subtracao= numero -numero2;


    printf("Escolha a operacao:\n");
    printf("(+) Soma\n");
    printf("(-) Subtracao\n");
    scanf("%s", &escolha);
    switch (escolha)
    {
    case '+':
        printf("Resultado:%.2f", soma);
        break;
    case '-':
        printf("Resultado:%.2f", subtracao);
        break;
    }
}