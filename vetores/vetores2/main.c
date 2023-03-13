#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0, par=0, impar=0, num[10];

    printf("Digite 10 valores:\n");
    for(cont=0;cont<10;cont++){
        scanf(" %d", &num[cont]);
    }
    cont=0;
    for(cont=0;cont<10;cont++){
        if(num[cont]%2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    printf("Tem %d pares\n", par);
    printf("Tem %d impares\n", impar);

    return 0;
}
