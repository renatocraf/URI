#include<stdio.h>

int main()
{
    long int fib[2]={0,1};
    int n;
    scanf("%d",&n);

    if (n==1){
        printf("%d",fib[0]);
    }
    else if(n == 2)
    {
        printf("%d %d",fib[0],fib[1]);
    }
    else{
        printf("%d %d",fib[0],fib[1]);
        for(int i = 2;i <n;i++)
        {
            fib[i%2] = fib[0]+fib[1];
            printf(" %d",fib[i%2]);
        }
    }
    printf("\n");
    return 0;
}
