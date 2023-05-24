#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Há vários testes lógicos que podem ser feito, quantas letras maiusculas ou quantos espaços existem na string, por exemplo.
    //Para isso usamos a tabela ASCII, disponivel na pasta em que este arquivo se encontra.

    char string[50]; //Declaração de string.
    int i = 0, cont = 0, tam = 0;

    printf("Digite seu nome:\n");
    gets(string);

    tam = strlen(string);

                //strlen(string) pode ser colocado direto em vez de tam
    for(i = 0; i < tam; i++){
        //Na tabela 32 significa espaço.
        if(string[i] == 32){
            cont++;
        }
    }
    //Imprime os espaços em branco na string.
    printf("Há %d espaços na string.\n", cont);

    return 0;
}
