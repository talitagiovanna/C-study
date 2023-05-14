#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float calcular_media(float nota1, float nota2, float nota3) {
    float media;
    media = (nota1 + nota2 + nota3) / 3.0;
    return media;
}

main () {
    float primeira_nota, segunda_nota, terceira_nota;

    printf("Digite uma nota: \n");
    scanf("%f %f %f", &primeira_nota, &segunda_nota, &terceira_nota);

    float media = calcular_media(primeira_nota, segunda_nota, terceira_nota);
    printf("A media do aluno e: %.2f\n", media);
}

