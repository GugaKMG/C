#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, i = 0, j = 0, contDivisores = 0;

    printf("Digite um numero:\n");
    scanf(" %d", &num);

    for(i = 1; i < num+1; i++){
        for(j = 1; j < i+1; j++){
            if(i%j == 0){
                contDivisores++;
            }
        }
        if(contDivisores == 2){
            printf("%d e primo.\n", i);
        }
        else{
            printf("%d nao e primo.\n", i);
        }
        contDivisores = 0;
    }

    return 0;
}
