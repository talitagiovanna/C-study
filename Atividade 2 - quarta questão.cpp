#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//QUARTA QUEST�O
main (){
	float salario, reajuste, percentual;
	
	printf("Informe o seu s�lario: \n");
	scanf("%f", &salario);
	printf("Informe o percentual de reajuste: ");
	scanf("%f", &percentual);
	
	reajuste = salario + (salario*(percentual/100));
	
	printf("O seu sal�rio com reajuste de %f � %f", percentual, reajuste);
}
