#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//SEGUNDA QUESTÃO
main (){
	int num, antecessor, sucessor;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor = num + 1;
	
	printf("O antecessor é %d.\n", antecessor);
	printf("O sucessor é %d.", sucessor);
}