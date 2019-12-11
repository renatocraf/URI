#include<stdio.h>
#include<stdlib.h>

int main()
{
    int inihora,iniminuto, fimhora,fimminuto,tempominuto, tempohora=0;
    scanf("%d",&inihora);
    scanf("%d",&iniminuto);
    scanf("%d",&fimhora);
    scanf("%d",&fimminuto);

    tempominuto = fimminuto - iniminuto;
    if(tempominuto<0)
    {
        tempominuto+=60;
        tempohora=-1;
    }
    tempohora= tempohora+fimhora-inihora;

    if (tempohora <= 0)
        tempohora += 24;
    if(tempohora==24 && tempominuto!=0)
        tempohora =0;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempohora,tempominuto);


    return 0;
}
