#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {

char nome[5][50];
float nota1[5], nota2[5], media[5];

for(int i=0; i<5; i++) {
    printf("Digite o nome do %dº aluno: ", i+1);
    scanf("%s", &nome[i]);
    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1[i]);
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2[i]);

    media[i] = (nota1[i]+nota2[i])/2.0;
}

printf("\nListagem de alunos:\n\n");

for(int i=0; i<5; i++) {
    printf("%s - Nota 1: %.2f | Nota 2: %.2f | Media: %.2f\n", nome[i], nota1[i], nota2[i], media[i]);
}

return 0;
}





