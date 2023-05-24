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

    tam = strlen(nome); // Função da biblioteca string para pegar o número de letras dentro da string.

    //Apresentará cada letra da string.
    for(i = 0; i < tam; i++){
        printf("%c %d", nome, i + 1);
        //Se usar %s em vez de %c, o programa irá imprimir o nome completo várias vezes e não letra por letra.
    }

    //Há uma função da biblioteca string chamada de strcpy(nome da variavel, "String"), que irá copiar para dentro de uma variável
    //uma string

    return 0;
}
