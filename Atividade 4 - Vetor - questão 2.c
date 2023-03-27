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

    for (i=0; i<10; i++) {
        if (NUMEROS[i] % 2 == 0) {
            VP[vp] = NUMEROS[i];
            vp++;
        } else {
            VI[vi] = NUMEROS[i];
            vi++;
        }
    }
    // Imprimindo os vetores
    printf("Numeros: ");
    for (i=0; i<10; i++) {
        printf("%d ", NUMEROS[i]);
    }

    printf("\nVetor de Pares: ");
    for (i=0; i<vp; i++) {
        printf("%d ", VP[i]);
    }

    printf("\nVetor de Impares: ");
    for (i=0; i<vi; i++) {
        printf("%d ", VI[i]);
    }
}