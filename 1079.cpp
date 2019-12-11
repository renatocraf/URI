#include<stdio.h>

int main()
{
    int N;
    double n1,n2,n3;
    scanf("%d",&N);

    for(int i=1; i<=N;i++)
    {
        scanf("%lf",&n1);
        scanf("%lf",&n2);
        scanf("%lf",&n3);
        printf("%0.1lf\n",(n1*2+n2*3+n3*5)/10);
    }

    return 0;
}
