#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//QUARTA QUESTÃO
main (){
	float salario, reajuste, percentual;
	
	printf("Informe o seu sálario: \n");
	scanf("%f", &salario);
	printf("Informe o percentual de reajuste: ");
	scanf("%f", &percentual);
	
	reajuste = salario + (salario*(percentual/100));
	
	printf("O seu salário com reajuste de %f é %f", percentual, reajuste);
}