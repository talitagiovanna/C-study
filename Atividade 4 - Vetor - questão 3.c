#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
    int NUMEROS[10];
    int i, maior, menor;
    
    printf("Digite 10 números inteiros:\n");
    
    for(i=0; i<10; i++) {
        scanf("%d", &NUMEROS[i]);
    }

    // Gerando o vetor OPOSTO
    for (i=0; i<10; i++) {
        OPOSTO[j] = NUMEROS[i];
        j--;
    }

    // Imprimindo os vetores
    printf("Numeros: ");
    for (i=0; i<10; i++) {
        printf("%d ", NUMEROS[i]);
    }

    printf("\nVetor OPOSTO: ");
    for (i=0; i<10; i++) {
        printf("%d ", OPOSTO[i]);
    }

    return 0;
}