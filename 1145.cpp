#include<stdio.h>

int main()
{
    int x,y;

    scanf("%d ",&x);
    scanf("%d",&y);
    for(int i = 1;i <=y;i++)
    {
        printf("%d",i);
        if(i%x==0)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}
