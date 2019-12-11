#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ini, fim,tempo;
    scanf("%d",&ini);
    scanf("%d",&fim);
    tempo = fim - ini;
    if (tempo <= 0)
        tempo += 24;

    printf("O JOGO DUROU %d HORA(S)\n",tempo);


    return 0;
}
