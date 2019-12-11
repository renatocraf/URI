#include<stdio.h>
#include<string.h>

int main(){

    char nome1[15],nome2[15],nome3[15];
    scanf("%s",nome1);
    scanf("%s",nome2);
    scanf("%s",nome3);


    if(!strcmp("vertebrado",nome1))
    {
        if(!strcmp("ave",nome2))
        {
            if(!strcmp("carnivoro",nome3))
            printf("aguia\n");
            else
            printf("pomba\n");
        }
        else
        {
            if(!strcmp("onivoro",nome3))
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
    {

        if(!strcmp("inseto",nome2))
        {
            if(!strcmp("hematofago",nome3))
            printf("pulga\n");
            else
            printf("lagarta\n");
        }
        else
        {
            if(!strcmp("hematofago",nome3))
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }

    return 0;
}
