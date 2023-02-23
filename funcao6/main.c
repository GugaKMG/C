#include <stdio.h>
#include <stdlib.h>

int bi(int ano){
    if(ano%4==0 || ano%400==0 && ano%100!=0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int ano, resul;

    printf("Em que ano você nasceu?\n");
    scanf(" %d", &ano);

    resul=bi(ano);

    if(resul == 1){
        printf("Esse ano é bissexto.\n");
    }
    else{
        printf("Esse ano não é bissexto.\n");
    }

    return 0;
}
