#include<stdio.h>
#include<stdlib.h>

int main()
{
    double num[3],maior,aux;
    scanf("%lf",&num[0]);
    scanf("%lf",&num[1]);
    scanf("%lf",&num[2]);
    bool troca=true;
    for(int i = 0;i<3&& troca == true;i++)
    {
        troca = false;
        for(int j = 0;j<2;j++)
        {
            if(num[j]< num[j+1])
            {
                troca = true;
                aux = num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
             }
        }
    }

    if(num[0]>= num[1]+num[2])
        printf("NAO FORMA TRIANGULO\n");
    else if(num[0]*num[0]== num[1]*num[1]+num[2]*num[2])
        printf("TRIANGULO RETANGULO\n");
    else if(num[0]*num[0]> num[1]*num[1]+num[2]*num[2])
        printf("TRIANGULO OBTUSANGULO\n");
    else if(num[0]*num[0]< num[1]*num[1]+num[2]*num[2])
        printf("TRIANGULO ACUTANGULO\n");

    if(num[0]==num[2])
        printf("TRIANGULO EQUILATERO\n");
    else if(num[0]==num[1]||num[1]==num[2])
        printf("TRIANGULO ISOSCELES\n");

    system("pause");


return 0;

}
