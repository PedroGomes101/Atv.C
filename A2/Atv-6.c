//Uma função que retorne verdadeiro se um número for primo e falso caso contrário
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
  if(resto==2) printf("TRUE\n");
  if(resto!=2) printf("FALSE\n");
}
int main()
{
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    primo(num);
    return 0;
}