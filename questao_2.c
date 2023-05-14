#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int calcular_resto(int numero1, int numero2) {
    int resto;
    resto = numero1 % numero2;
    return resto;
}

main () {
    int numero1, numero2;

    printf("Digite um número: \n");
    scanf("%d", &numero1);
    printf("Digite um número: \n");
    scanf("%d", &numero2);

    int resto = calcular_resto(numero1, numero2);
    printf("O resto da divisao de %d por %d é: %d\n", numero1, numero2, resto);
}