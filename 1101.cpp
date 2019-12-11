#include<stdio.h>

int main()
{
    int M,N,soma,aux;

    scanf("%d ",&M);
    scanf("%d",&N);

    while(M>0 && N>0)
    {
        soma = 0;
        if(M>N)
        {
            aux = M;
            M = N;
            N = aux;
        }
        for(int i=M;i<=N;i++)
        {
            printf("%d ",i);
            soma+= i;
        }
        printf("Sum=%d\n",soma);
        scanf("%d ",&M);
        scanf("%d",&N);
    }

    return 0;
}
