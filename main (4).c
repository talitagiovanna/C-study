#include <stdio.h>

int main()
{
    
    int num = 0;
    int cubo = 0;
    printf("Cubo de um número\n");
    printf("Digite um número: ");
    scanf("%d", &num);

    cubo = num*num*num;
    printf("\nO cubo de %d é %d.\n", num, cubo);

    return 0;
}