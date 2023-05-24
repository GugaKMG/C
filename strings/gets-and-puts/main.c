#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A outra forma é utilizando as funções gets e puts.
    char nome[50]; //Declaração de string

    printf("Digite o seu nome.\n");
    gets(nome); //Armazena a string.

    printf("Valor armazenado: \n");
    puts(nome); //Retorna a string.

    //Dessa forma o programa permite espaços.

    return 0;
}
