//Uma função que receba como parâmetro a temparatura em celsius e retorne a temperatura em farenheight
#include <stdio.h>
float graus(float gra)
{    
    float f;
    f=(1.8*gra)+32;
    return f;
}
int main()
{
    float gra;
    printf("Digite o grau:\n");
    scanf("%f",&gra);
    printf("%.2f",graus(gra));
    return 0;
}