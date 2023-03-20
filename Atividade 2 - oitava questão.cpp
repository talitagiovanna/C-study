#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//OITAVA QUESTÃO
main(){
	int num_1, num_2, num_3;
	
	printf("Digite um número: \n");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	if((num_1 != num_2) && (num_2 != num_3)){
		printf("Nenhum número é igual!");
	}
	else if ((num_1 == num_2) && (num_2 != num_3)){
		printf("Temos dois números iguais!");
	}
	else if ((num_1 == num_3) && (num_3 != num_2)){
		printf("Temos dois números iguais!");
	}
	else if ((num_1 == num_2) && (num_2 == num_3)){
		printf("Temos três números iguais!");
	} else{
		printf("Temos dois números iguais!");
	}
}
