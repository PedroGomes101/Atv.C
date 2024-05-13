//Calculadora que faz as 4 operações principais.
#include <stdio.h>
int main()
{
   int num,n1,n2;
   printf("Digite para usar escolha uma opção:\n");
   printf(" Digite 1 para soma\n");
   printf(" Digite 2 para subtração\n");
   printf(" Digite 3 para multiplicação\n");
   printf(" Digite 4 para divisão\n");
   scanf("%d",&num);
   if(num==1){
    printf("Digite os numeros desejados:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    n1+=n2;
   }
    if(num==2){
    printf("Digite os numeros desejados:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    n1=n1-n2;
    }
    if(num==3){
    printf("Digite os numeros desejados:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    n1=n1*n2;
    }
    if(num==4){
    printf("Digite os numeros desejados:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    n1=n1/n2;
    }
    printf("Total = %d\n",n1);
   return 0;
}