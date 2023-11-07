#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int numero1;
    int numero;
    int medida;
    float farah;
    float km;

    do
    {
        if (numero != 0)
        {
            printf("Para saber qual unidade esta utilizando ?\n");
            printf("(1) Celsius \n");
            printf("(2) Metros \n");
            scanf("%d", &numero);
        }
        else
        {
            break;
        }

        if ((numero1 != 0) && (medida!= 0) )
        {

            switch (numero)
            {
            case 1:

                printf("Digite quantos graus desejar:\n");
                scanf("%d", &numero1);
                printf("Deseja converter para Fahrenheit ?\n");
                printf("(1) Sim \n");
                scanf("%d", &medida);
                switch (medida)
                {
                case 1:
                    farah = (numero1 * 1.8) + 32;
                    printf("Conversao:%.1f\n", farah);
                    break;
                }
                break;

            case 2:
                printf("Digite quantos metros desejar:\n");
                scanf("%d", &numero1);
                printf("Deseja converter para km ?\n");
                printf("(1) Sim \n");
                scanf("%d", &medida);
                switch (medida)
                {
                case 1:
                    km = numero1 / 1000;
                    printf("Conversao:%.4f\n", km);
                    break;
                }
                break;
            }
        }
        else
        {
            break;
        }
    } while (numero == 0);
}
