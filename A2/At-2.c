// enesimo termo primo.
#include <stdio.h>
int primo(int num)
{
    int y, resto=0;
      for(y=1 ; y<=num ; y++)
    {
        if(num%y==0)
        {
            resto++;
        }
        
    }
   if(resto==2)  return printf("É um número primo.\n");
   if(resto!=2) return  printf("Não é um número não primo.\n");
}

int main()

{
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    primo(num);
    return 0;
}