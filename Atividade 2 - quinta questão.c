#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//QUINTA QUESTÃO
main (){
	float nulos, validos, brancos, percentual_brancos, percentual_validos, percentual_nulos, total;
	
	printf("Informe a quantidade de votos nulos: \n");
	scanf("%f", &nulos);
	printf("Informe a quantidade de votos validos: \n");
	scanf("%f", &validos);
	printf("Informe a quantidade de votos brancos: \n");
	scanf("%f", &brancos);
	
	total = nulos + validos + brancos;
	percentual_brancos = (brancos*100)/total;
	percentual_validos = (validos*100)/total;
	percentual_nulos = (nulos*100)/total;
	
	printf("O percentual de votos brancos foram %f.\n", percentual_brancos);
	printf("O percentual de votos válidos foram %f.\n", percentual_validos);
	printf("O percentual de votos nulos foram %f.", percentual_nulos);
}