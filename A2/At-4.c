//Uma função que preencha um vetor de 10 posições com números sequenciais menores do que um valor digitado pelo usuário.
#include <stdio.h>
int vet(int num, int v[])
{
    int x;
    for(x=9;x>=0;x--)
    {
        num--;
        v[x]=num;
         
    }
    return 0;
}
int main()
{
    int v[10];
    int num,x=0;
    printf("Digite um número:\n");
    scanf("%i",&num);
    vet(num,v);
    v[10]=num;
    for(x=0;x<10;x++)
    {
        printf(" %i",v[x]);
    }
    return 0;
}