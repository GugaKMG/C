#include <stdio.h>
#include <stdlib.h>

int fatorial(int n1){
    int cont, soma;

    for(cont=0;cont=n1;cont++){
        soma=n1*cont;
    }
    return soma;
}

int main()
{
    int n1, resul;

    printf("Digite um número:\n");
    scanf(" %d", &n1);

    resul=fatorial(n1);

    printf("Esse é o fatorial %d", resul);
    return 0;
}
