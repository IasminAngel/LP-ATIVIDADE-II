#include <stdio.h>
#include <stdlib.h>

int main(){

    char login [500];
    char loginsalvo [500] = "acessoedificio"; 

    do
    {
    printf("Para ter acesso ao edíficio, coloque o acesso correto:\n"); 
    gets(login);

    if (strcmp (login, loginsalvo) == 0 )
    {
        printf("Acesso reconhecido!\n");
    } else {
        printf("Acesso negado\n");
    }
    
    } while (login != loginsalvo);
    


}