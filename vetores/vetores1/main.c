#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    float nota[4], soma;

    printf("Digite suas notas:\n");

    for(cont=0;cont<4;cont++){
    scanf(" %f", &nota[cont]);
    }
    cont=0;
    for(cont=0;cont<4;cont++){
        soma=soma+nota[cont];
    }
    cont=0;
    printf("Essa é a média %.2f\n", soma/4);

    for(cont=0;cont<4;cont++){
        if(nota[cont] >= 7){
            printf("Essa nota está acima da média %.2f\n", nota[cont]);
        }else{
            continue;
        }
    }
    return 0;
}
