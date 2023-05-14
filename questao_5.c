#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int calcular_idade(int ano_nascimento) {
    int ano_atual = 2023; 
    int idade = ano_atual - ano_nascimento;
    return idade;
}

main () {
    int ano_nascimento;

    printf("Digite o seu ano de nascimento: \n");
    scanf("%d", &ano_nascimento);

    int idade = calcular_idade(ano_nascimento);
    printf("Sua idade atual é: %d\n", idade);
}