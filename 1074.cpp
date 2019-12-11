#include<stdio.h>

int main()
{
    int N,num;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&num);

        if(num==0)
            printf("NULL\n");
        else
        {
            if(num%2==0)
                printf("EVEN ");
            else
                printf("ODD ");
        }
        if(num>0)
            printf("POSITIVE\n");
        else if(num <0)
            printf("NEGATIVE\n");
     }
    return 0;
}


