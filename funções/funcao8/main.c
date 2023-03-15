#include <stdio.h>
#include <stdlib.h>

int inss(float salario){
    float porcento;
    if(salario<=1556.94){
        porcento=8;
        porcento=porcento/100;
        return salario*porcento;
    }else if(salario>=1556,95 && salario<=2594.92){
        porcento=9;
        porcento=porcento/100;
        return salario*porcento;
    }else if(salario>=2594.93 && salario<=5189.82){
        porcento=11;
        porcento=porcento/100;
        return salario*porcento;
    }else{
        return 570.88;
    }
}
int irpf(float salario, float valorinss, int depen){
    int porcento;
    depen=depen*189.59;
    if(salario<=1903.98){
        return 0;
    }else if(salario>=1903.99 && salario<=2826.65){
        porcento=7,5;
        porcento=porcento/100;
        porcento=salario*porcento;
        salario=salario-valorinss-depen;
        return salario*porcento;
    }else if(salario>=2826.66 && salario<=3751.05){
        porcento=15;
        porcento=porcento/100;
        porcento=salario*porcento;
        salario=salario-valorinss-depen;
        return salario*porcento;
    }else if(salario)
}

int main()
{
    float salario, valorinss, valorirpf;
    int depen;

    printf("Digite seu salário bruto:\n");
    scanf(" %f", &salario);
    printf("Há quantos dependentes?\n");
    scanf(" %d", &depen);

    valorinss=inss(salario);
    valorirpf=irpf(salario,valorinss,depen);

    printf("Valor do INSS %.2f\n",valorinss);
    printf("Valor do IRPF %.2f\n", valorirpf);
    printf("Salário bruto %.2f\n", (salario-valorinss)-valorirpf);
    return 0;
}
