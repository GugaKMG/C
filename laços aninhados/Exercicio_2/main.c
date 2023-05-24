#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, i = 0, j = 0;

    printf("Digite um numero.\n");
    scanf(" %d", &num);

    for(i = 1; i < num+1; i++){
        for(j = 1; j < i+1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
