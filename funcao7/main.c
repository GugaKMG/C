#include <stdio.h>
#include <stdlib.h>

int eleicao(int idade){
    if(idade < 16){
        return 'N';
    }else if(idade >= 18 && idade <= 65){
        return 'O';
    }else{
        return 'F';
    }
}

int main()
{
    int idade;
    char eleitor;

    printf("Digite sua idade:\n");
    scanf(" %d", &idade);

    eleitor=eleicao(idade);

    if(eleitor=='N'){
        printf("Não eleitor.\n");
    } else if(eleitor=='O'){
        printf("Voto obrigatório.\n");
    }else{
        printf("Voto facultativo.\n");
    }
    return 0;
}
