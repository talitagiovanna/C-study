#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int encontrar_menor(int numero1, int numero2, int numero3) {
    int menor;
    if (numero1 < numero2 && numero1 < numero3) {
        menor = numero1;
    } else if (numero2 < numero3) {
        menor = numero2;
    } else {
        menor = numero3;
    }
    return menor;
}

main () {
    int numero1, numero2, numero3;

    printf("Digite um número: \n");
    scanf("%d", &numero1);
    printf("Digite um número: \n");
    scanf("%d", &numero2);
    printf("Digite um número: \n");
    scanf("%d", &numero3);

    int menor = encontrar_menor(numero1, numero2, numero3);
    printf("O menor numero e: %d\n", menor);
}