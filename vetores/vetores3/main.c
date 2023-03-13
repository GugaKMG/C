#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1[5], n2[5], soma[5], cont=0;

    printf("Digite 10 valores:\n");
    for(cont=0;cont<6;cont++){
        scanf("%d", &n1[cont]);
    }
    cont=0;
    for(cont=0;cont<6;cont++){
        scanf("%d", &n2[cont]);
    }
    cont=0;
    for(cont=0;cont<6;cont++){
        soma[cont]=n1[cont]+n2[cont];
    }
    printf("Esses são os primeiros valores %3d %3d %3d %3d %3d\n", n1[0], n1[1], n1[2], n1[3], n1[4]);
    printf("Esses são os segundos valores que serão somados com os primeiros %3d %3d %3d %3d %3d\n", n2[0], n2[1], n2[2], n2[3], n2[4]);
    printf("Essa é a soma deles: %3d %3d %3d %3d %3d\n", soma[0], soma[1], soma[2], soma[3], soma[4]);
    return 0;
}
