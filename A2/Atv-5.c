#include <stdio.h>
int tv(int *a, int *b) 
{
    int temp;
    if (*a == *b)
    {
        return 0;
    }
    temp = *a;
    *a = *b;
    *b = temp;

    return 1;
}

int main() {
    // Exemplo de uso da função
    int x,y; 
    printf("Digíte os valores de x e y:");
    scanf("%i",&x);
    scanf("%i",&y);
    printf("Valores antes da troca: x = %i, y = %i\n", x, y);
    if(!tv(&x, &y)) printf("São iguais:\n");
    printf("Valores depois da troca: x = %i, y = %i\n",x,y);
    return 0;
}