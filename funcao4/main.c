#include <stdio.h>
#include <stdlib.h>

int adicao(float n1, float n2){
    return n1+n2;
}
int subtracao(float n1, float n2){
    return n1-n2;
}
int multi(float n1 float n2){
    return n1*n2;
}
int divisao(float n1 float n2){
    return n1/n2;
}
int quo(int n1, int n2){
    return n1/n2;
}
int resto(int n1, int n2){
    return n1%n2;
}
int potencia(float n1, float n2){
    return n1*n2;
}
int main()
{
    int n1, n2, resul;
    char ope;

    printf("Digite dois n�meros e a opera��o que deseja fazer: \n");
    printf("A-adi��o\n");
    printf("S-subtra��o\n");
    printf("M-multiplica��o\n");
    printf("D-divis�o\n");
    printf("Q-quociente inteiro\n");
    printf("R-resto\n");
    printf("P-pot�ncia\n");
    scanf("%f %f %c", &n1, &n2, &ope);

    if(ope == a || ope == A){
        resul=adicao(n1,n2);
    }else if(ope == s || ope == S){
        resul=subtracao(n1,n2);
    }else if(ope == m || ope == M){
        resul=multi(n1,n2);
    }else if(ope == d || ope == D){
        resul=divisao(n1,n2);
    }else if(ope == q || ope == Q){
        resul=quo(n1,n2);
    }else if(ope == r, ope == R){
        resul=resto(n1,n2);
    }



    printf("Esse � o resultado %f", resul);
    return 0;
}
