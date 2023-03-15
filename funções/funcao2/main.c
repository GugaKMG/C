#include <stdio.h>
#include <stdlib.h>

int calculo(int x,int y) {
    int resulx, resuly;
    resulx=x+y+(x-y)/2;
    resuly=y+x+(y-x)/2;
    return y;
    return x;
}
int main(void) {
    int x, y;

    printf("Digite dois números: \n");
    scanf(" %d %d", &x, &y);

    abs(calculo(x,y));

    if(x > y){
        printf("Esse é o maior %d", x);
    }
    else{
        printf("Esse é o maior %d", y);
    }

    return 0;
}
