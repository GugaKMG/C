#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Em C n�o existe um tipo string nativo, por isso chamamos isso de string: char string[];
    //Todo termino de string vem com \0, isso ficaria assim:

    //char string[50] = {'f', 'u', 'l', 'a', 'n', 'o', '\0'};
    //Necesitaria de 7 caracteres, 6 para as letras e um para o \0.

    char string[50]; //Declara��o de string
    //Caso n�o determine o tamanho, o vetor ter� exatamente o tamanho do que for colocdo nele.

    //Para fazer a leitura existe duas formas, uma ser� mostrada em outro arquivo, essa ser� com scanf()
    scanf(" %s", string); //N�o precisa de &
    //Se houver algum espa�o, a string � encerrada e colocado um \0.

    printf("Este foi o nome apresentado %s", string);

    return 0;
}
