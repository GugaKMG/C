#include <stdio.h>
#include <stdlib.h>

#define MAX 200

int main()
{
    int num[MAX], cont=0, busca, n=0;

    printf("Digite valores, o valor zero far� com que o programa mostre os valores:\n");
    for(cont=0;cont<MAX;cont++){
        scanf("%d", &num[cont]);
        if(num[cont] != 0){
            n++;
            continue;
        }else{
            break;
        }
    }
    cont=0;
    printf("Diga um n�mero para buscar:\n");
    scanf("%d", &busca);
    for(cont=0;cont<MAX;cont++){
        if(busca==num[n]){
            printf("%d est� na posi��o %d", busca, n);
            break;
        }else{
            continue;
        }
    }
    return 0;
    }
