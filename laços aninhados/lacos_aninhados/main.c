#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    int num = 0, i = 0, j = 0, conti = 0, contj = 0;

    //Entrada de dados
    printf("Digite um numero.\n");
    scanf(" %d", &num);

    //Laços aninhados, ou seja, um laço dentro do outro
    for(i = 1; i < num + 1; i ++){
        for(j = 1; j < num + 1; j++){
            contj++;
        }
        conti++;
    }

    //Saída de dado mostrando quantas vezes os laços se repetiram
    printf("O laco externo se repetiu %d vezes.\n", conti);
    printf("O laco interno se repetiu %d vezes.\n", contj);
}
