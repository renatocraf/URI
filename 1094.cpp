#include<stdio.h>

int main()
{
    int N,total=0,num,coelho=0,rato=0,sapo=0;
    char letra;
    double porcento_coelho,porcento_rato,porcento_sapo;
    scanf("%d",&N);

    for(int i=1; i<=N;i++)
    {
        scanf("%d ",&num);
        scanf("%c",&letra);
        total+=num;
        switch (letra)
        {
            case 'C':
                coelho+=num;
                break;
            case 'R':
                rato+=num;
                break;
            case 'S':
                sapo+=num;
                break;
        }
    }

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",coelho);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);
    printf("Percentual de coelhos: %0.2lf %%\n",(coelho*100.00)/total);
    printf("Percentual de ratos: %0.2lf %%\n",(rato*100.00)/total);
    printf("Percentual de sapos: %0.2lf %%\n",(sapo*100.00)/total);
    return 0;
}
