#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //variaveis

    int
        T,
        N,     //   1<= N <= 10^4
        Mi[60],    //   Mi <= 60
        Xij[60],   //   Xij <= 60
        Q,
        aux,
        opr,
        conj1,
        conj2;     //   Q <= 10^6

    list<int> listas[60];


    //ler numero de instancias
    scanf("%d",&T);
    //fflush(stdin);

    for(int i = 1;i<=T;i++)
    {
        //ler numero de conjunto
        scanf("%d",&N);
        //fflush(stdin);

        //dentro de outro for
        for(int j=1;j<=N;j++)
        {
            //ler a quantidade de elementos
            scanf("%d",&Mi[j]);
            //fflush(stdin);
            //ler os elementos
            for(int k =1;k<=Mi[j];k++)
            {
                scanf("%d",&aux);
                //fflush(stdin);
                listas[j].push_back(aux);
                //printf("# lido %d #",listas[j].back());
            }
            listas[j].sort();

        }
    //ler quantidade de operacoes
        scanf("%d",&Q);
        //fflush(stdin);
        for(int j=1;j<=Q;j++)
        {
            //ler operacao(1 ou 2)
            scanf("%d",&opr);
            //fflush(stdin);
            //ler conjuntos
            scanf("%d",&conj1);
            //fflush(stdin);
            scanf("%d",&conj2);
            //fflush(stdin);
            if(opr == 1)
            {
               // printf("nao fiz\n");
                //
                int cont=0;
                vector<int> it1;
                vector<int> it2;
                it1.merge(listas[conj1]);
                it2.merge(listas[conj2]);
                //it1 = listas[conj1].begin();
                //it2 = listas[conj2].begin();
                //listas[0].clear();
                //bool possui=false;
                for(; it2.size()!=0;it2.pop_front)
                {
                    for(; it1.size()!=0;it1.pop_front)
                    {
                        if(it1.front == it2.front)
                        {
                            //listas[0].push_front(*it1);
                            cont++;
                        }
                    }
                }
                //cont = cont/2;
                printf("%d\n",cont);

            }
            else
            {
                //listas[0].clear();
                listas[0].merge(listas[conj1]);
                listas[0].merge(listas[conj2]);
                listas[0].sort();
                listas[0].unique();
                int tam = listas[0].size();
                printf("%d\n",tam);
            }

        }

    }



    return 0;
}
