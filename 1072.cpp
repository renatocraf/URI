#include<stdio.h>

int main()
{
    int N;

    scanf("%d",&N);
    if(N%2==1)
        N--;

    for(int i = 2;i<=N;i+=2)
    {
        printf("%d^2 = %d\n",i,i*i);
    }
    return 0;
}





