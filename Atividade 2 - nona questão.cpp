#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//NONA QUEST�O
main(){
	int num_1, num_2, num_3;
	
	printf("Digite um n�mero: \n");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	if ((num_1 < num_2) && (num_2 < num_3)){
		printf("A ordem crescente � %d, %d, %d.", num_1, num_2, num_3);
	}
	else if((num_2 < num_1) && (num_1 < num_3)){
		printf("A ordem crescente � %d, %d, %d.", num_2, num_1, num_3);
	}
	else if ((num_1 < num_2) && (num_3 < num_2)){
		printf("A ordem crescente � %d, %d, %d.", num_1, num_3, num_2);
	}
	else if ((num_3 < num_2) && (num_1 < num_2)){
		printf("A ordem crescente � %d, %d, %d.", num_3, num_1, num_2);
	}
	else if ((num_3 < num_1) && (num_2 < num_1)){
		printf("A ordem crescente � %d, %d, %d.", num_3, num_2, num_1);
	}else{
		printf("A ordem crescente � %d, %d, %d.", num_3, num_1, num_2);
	}
}
