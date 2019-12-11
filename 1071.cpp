#include<stdio.h>

int main()
{
    int num1,num2,soma=0,aux;
    scanf("%d",&num1);
    scanf("%d",&num2);
    //ordenar maior
    if(num1>num2)
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if(num1%2==1 || num1%2==-1)
        num1++;
    for(int i=num1+1;i<num2;i+=2)
    {
        soma +=i;

    }
    printf("%d\n",soma);
    return 0;
}
