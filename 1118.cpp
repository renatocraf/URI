#include<stdio.h>

int main()
{

    int simnao = 1;
    double nota1,nota2,media;
    while(simnao==1)
    {
        bool valido = false;
        while(!valido)
        {
            scanf("%lf",&nota1);
            if (nota1>=0 && nota1<=10)
                valido = true;
            else
                printf("nota invalida\n");
        }
        valido = false;
        while(!valido)
        {
            scanf("%lf",&nota2);
            if (nota2>=0 && nota2<=10)
                valido = true;
            else
                printf("nota invalida\n");
        }
        media = (nota1+nota2)/2;
        printf("media = %0.2lf\n",media);

        valido = false;
        while(!valido)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&simnao);
            if (simnao>=1 && simnao<=2)
                valido = true;
        }

    }
    return 0;
}
