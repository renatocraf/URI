#include<stdio.h>

struct tempo
{
    int dia,hora,minuto,seg;
};

int main()
{
    tempo entrada,saida,duracao;
    char lixo[10];

    scanf("%s ",&lixo);
    scanf("%d ",&entrada.dia);
    scanf("%d ",&entrada.hora);
    scanf("%s ",&lixo);
    scanf("%d ",&entrada.minuto);
    scanf("%s ",&lixo);
    scanf("%d ",&entrada.seg);

    scanf("%s ",&lixo);
    scanf("%d ",&saida.dia);
    scanf("%d ",&saida.hora);
    scanf("%s ",&lixo);
    scanf("%d ",&saida.minuto);
    scanf("%s ",&lixo);
    scanf("%d ",&saida.seg);

    duracao.seg = saida.seg - entrada.seg;

    if(duracao.seg<0)
    {
        duracao.seg += 60;
        entrada.minuto++;
    }

    duracao.minuto = saida.minuto - entrada.minuto;
    if(duracao.minuto<0)
    {
        duracao.minuto += 60;
        entrada.hora++;
    }

    duracao.hora = saida.hora - entrada.hora;
    if(duracao.hora<0)
    {
        duracao.hora += 24;
        entrada.dia++;
    }

    duracao.dia =  saida.dia - entrada.dia;

    printf("%d dia(s)\n",duracao.dia);
    printf("%d hora(s)\n",duracao.hora);
    printf("%d minuto(s)\n",duracao.minuto);
    printf("%d segundo(s)\n",duracao.seg);

    return 0;
}
