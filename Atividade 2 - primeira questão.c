#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 //PRIMEIRA QUESTÃO
main (){
	int ano, idade;
	printf("Digite o ano de seu nascimento: ");
	scanf("%d", &ano);
	
	idade = 2023 - ano;
	
	printf("Sua idade é %d", idade);
}