#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca para lidar com strings

int main()
{
    //Exemplo de varredura de strings
    char nome[50];
    int tam = 0, i = 0;

    printf("Digite seu nome:\n");
    gets(nome);

    tam = strlen(nome); // Fun��o da biblioteca string para pegar o n�mero de letras dentro da string.

    //Apresentar� cada letra da string.
    for(i = 0; i < tam; i++){
        printf("%c %d", nome, i + 1);
        //Se usar %s em vez de %c, o programa ir� imprimir o nome completo v�rias vezes e n�o letra por letra.
    }

    //H� uma fun��o da biblioteca string chamada de strcpy(nome da variavel, "String"), que ir� copiar para dentro de uma vari�vel
    //uma string

    return 0;
}
