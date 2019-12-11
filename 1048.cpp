#include<stdio.h>
#include<stdlib.h>

int main()
{
    double salario,novosalario,reajuste;
    int porcento;
    scanf("%lf",&salario);

    if(0<= salario && salario<=400)
        porcento = 15;
    else if(400< salario && salario<=800)
        porcento = 12;
    else if(800< salario && salario<=1200)
        porcento = 10;
    else if(1200< salario && salario<=2000)
        porcento = 7;
    else if(2000< salario)
        porcento = 4;

    reajuste = salario*porcento/100;
    novosalario = salario + reajuste;

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",novosalario,reajuste,porcento);

    return 0;
}
