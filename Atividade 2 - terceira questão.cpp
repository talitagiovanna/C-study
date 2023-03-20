#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// TERCEIRA QUESTÃO
main (){
	int num, cubo;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	cubo = num*num*num;
	
	printf("O cubo do número %d é %d", num, cubo);
}
