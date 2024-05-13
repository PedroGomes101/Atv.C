//Uma função que dado um número retorne seu fatorial.
#include <stdio.h>
int fat(int fatorial)
{
    int resposta=1;
    for(; fatorial>=1; fatorial--)
    {
        resposta=resposta*fatorial;
    }
    return resposta;
}
int main()
{
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
   printf("O número fatorial é:%d\n",fat(num));
   return 0;
}