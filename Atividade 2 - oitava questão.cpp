#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//OITAVA QUEST�O
main(){
	int num_1, num_2, num_3;
	
	printf("Digite um n�mero: \n");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	if((num_1 != num_2) && (num_2 != num_3)){
		printf("Nenhum n�mero � igual!");
	}
	else if ((num_1 == num_2) && (num_2 != num_3)){
		printf("Temos dois n�meros iguais!");
	}
	else if ((num_1 == num_3) && (num_3 != num_2)){
		printf("Temos dois n�meros iguais!");
	}
	else if ((num_1 == num_2) && (num_2 == num_3)){
		printf("Temos tr�s n�meros iguais!");
	} else{
		printf("Temos dois n�meros iguais!");
	}
}
