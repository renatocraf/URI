#include<stdio.h>
#include<stdlib.h>

int main()
{
    double salario,novosalario,reajuste;
    scanf("%lf",&salario);
    if(0<= salario && salario<=2000)
    {
        printf("Isento\n");
    }
    else
    {
        if(2000< salario && salario<=3000)
            novosalario = (salario-2000)*8/100;
        else if(3000< salario && salario<=4500)
            novosalario = 1000*8/100+ (salario-3000)*18/100;
        else if(4500< salario)
            novosalario = 1000*8/100+ 1500*18/100+(salario-4500)*28/100;
        printf("R$ %.2lf\n",novosalario);
    }

    return 0;
}
