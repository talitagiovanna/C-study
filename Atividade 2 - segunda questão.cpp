#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//SEGUNDA QUEST�O
main (){
	int num, antecessor, sucessor;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor = num + 1;
	
	printf("O antecessor � %d.\n", antecessor);
	printf("O sucessor � %d.", sucessor);
}


