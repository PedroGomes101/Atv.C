//Uma função que receba como parâmetro as variáveis inteiras a,b e c e mostre os valores em ordem crescente.
#include <stdio.h>
int cres(int a, int b,int c)
{
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("Os números em ordem crescente são: %i, %i, %i\n",a,b,c);
}
void main()
{
    int a,b,c;
    printf("Digite 3 números:\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
   cres(a,b,c);
}