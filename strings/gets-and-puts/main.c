#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A outra forma � utilizando as fun��es gets e puts.
    char nome[50]; //Declara��o de string

    printf("Digite o seu nome.\n");
    gets(nome); //Armazena a string.

    printf("Valor armazenado: \n");
    puts(nome); //Retorna a string.

    //Dessa forma o programa permite espa�os.

    return 0;
}
