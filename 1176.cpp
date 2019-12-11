#include<stdio.h>
#include<stdlib.h>

int main()
{

    double *fib;
    int T,num,H;
    scanf("%d",&T);
    H = T+1;
    fib = (double *)malloc((T+1)*sizeof(double));

    fib[0]=0;

    if(T>1)
        fib[1]=1;


    for(int i = 2;i<=H;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    for(int i = 1;i<= T;i++)
    {
        scanf("%d",&num);
        printf("Fib(%d) = %.0lf\n",num,fib[num]);
    }



    return 0;
}
