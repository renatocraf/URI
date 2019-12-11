#include<stdio.h>

int main()
{
    int N,maior=0,cont=0;

    for(int i=1; i<=100;i++)
    {
        scanf("%d",&N);
        if(N>maior)
        {
            maior = N;
            cont = i;
        }

    }
    printf("%d\n%d\n",maior,cont);
    return 0;
}
