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
    
    maior = NUMEROS[0];
    menor = NUMEROS[0];
    
    for(i=1; i<10; i++) {
        if(NUMEROS[i] > maior) {
            maior = NUMEROS[i];
        }
        if(NUMEROS[i] < menor) {
            menor = NUMEROS[i];
        }
    }
    
    printf("O maior número é %d e o menor número é %d", maior, menor);
    
    return 0;
}