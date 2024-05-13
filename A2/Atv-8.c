//Uma função que permita que o programa abaixo funcione adequadamente:
#include <stdio.h>
char proxcar(int x,char y )
{
    char z;
    z=(y+x);
    return z;
}
int main()
{
  int x;
  char y;
  y = 'a';
  printf("Digite um número: ");
  scanf("%d", &x);
  printf("O %dº caracter depois de %c é: %c\n", x, y, proxcar(x,y));
  y = proxcar(3,'b');
  printf("O %dº caracter depois de %c é: %c\n", 3, 'b', y);
  return 0;
}
