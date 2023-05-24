#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0;

    for(i = 1; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d%d ", i, j);
        }
        printf("\n");
    }
    return 0;
}
