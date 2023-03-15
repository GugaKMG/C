#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592
int calculo(float raio) {
    raio=raio/2;
    return 4*(PI*pow(raio,3))/3;
}
int main(void)
{
    float diametro, resul;

    printf("Digite o diâmetro da bola: \n");
    scanf(" %f", &diametro);

    resul=calculo(diametro);

    printf(" %f", resul);

    return 0;
}
