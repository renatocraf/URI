#include<stdio.h>

int main()
{
    for(int i = 0; i<=10; i++)
    {
        if(i%5==0)
        {
            for(int j =1;j<=3;j++)
                printf("I=%d J=%d\n",int(i*0.2),(int)(j+0.2*i));
        }
        else
            for(int j =1;j<=3;j++)
                printf("I=%.1lf J=%.1lf\n",i*0.2,j+i*0.2);
    }

    return 0;
}
