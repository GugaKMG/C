#include <stdio.h>
#include <stdlib.h>

#define MAX 200

int main()
{
    int num[MAX], cont=0, n=0;

    printf("Digite valores, o valor zero fará com que o programa mostre os valores:\n");
    for(cont=0;cont<MAX;cont++){
        scanf("%d", &num[cont]);
        n=cont;
        if(num[cont] != 0){
            continue;
        }else{
            break;
        }
    }
    cont=0;
    for(cont=n;cont>0;cont--){
        printf("%d", num[cont]);
    }
    return 0;
}
