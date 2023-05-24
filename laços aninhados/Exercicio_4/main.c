#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0;

    for(i = 1; i < 11; i++){
        for(j = 1; j < 11; j++){
            printf("%d ", i*j);
        }
        printf("\n\n");
    }
    return 0;
}
