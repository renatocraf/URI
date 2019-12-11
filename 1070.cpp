#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num%2==0)
        num++;
    for(int i=num;i<=num+11;i+=2)
    {
        printf("%d\n",i);

    }
    return 0;
}
