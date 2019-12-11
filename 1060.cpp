#include<stdio.h>

int main()
{
    int cont=0;
    double num;
    for(int i=0;i<6;i++)
    {
        scanf("%lf",&num);
        if(num>0)
            cont++;
    }
    printf("%d valores positivos\n",cont);
    return 0;
}
