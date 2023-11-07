#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i;
    float soma = 0;
    float media;
    float nota;

    for (i = 1; i <= 2; i++)
    {
        do
        {
            printf("Digite a nota do aluno:");
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
            {
                printf("Nota inválida \n Digite a nota novamente \n");
            }

        } while (nota < 0 || nota > 10);

        soma += nota;
    }
    media = soma / 2;

    printf("Revelando media: %.1f \n", media);

    return 0;
}