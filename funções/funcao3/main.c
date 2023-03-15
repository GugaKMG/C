#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){
    if(x > y){
        printf("Esse é o maior %d", x);
    }
    else{
        printf("Esse é o maior %d", y);
    }
}

int main()
{
    int x, y;

    printf("Digite dois valores:\n");
    scanf("%d %d", &x,&y);

    printf(maior(x,y));

    return 0;
}
