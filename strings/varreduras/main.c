#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //H� v�rios testes l�gicos que podem ser feito, quantas letras maiusculas ou quantos espa�os existem na string, por exemplo.
    //Para isso usamos a tabela ASCII, disponivel na pasta em que este arquivo se encontra.

    char string[50]; //Declara��o de string.
    int i = 0, cont = 0, tam = 0;

    printf("Digite seu nome:\n");
    gets(string);

    tam = strlen(string);

                //strlen(string) pode ser colocado direto em vez de tam
    for(i = 0; i < tam; i++){
        //Na tabela 32 significa espa�o.
        if(string[i] == 32){
            cont++;
        }
    }
    //Imprime os espa�os em branco na string.
    printf("H� %d espa�os na string.\n", cont);

    return 0;
}
