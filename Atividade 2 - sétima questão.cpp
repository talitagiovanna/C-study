#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//S�TIMA QUEST�O
main (){
	float combustivel, valor_total, lucro, custo, marcacao_inicio, marcacao_final, litros_gastos, media;
	
	printf("Informe o pre�o do combust�vel: \n");
	scanf("%f", &combustivel);
	printf("Informe a marca��o do �nicio do dia: \n");
	scanf("%f", &marcacao_inicio);
	printf("Informe a marca��o do final do dia: \n");
	scanf("%f", &marcacao_final);
	printf("Informe a quantidade de litros gastos: \n");
	scanf("%f", &litros_gastos);
	printf("Informe o valor total recebido dos passageiros: \n");
	scanf("%f", &valor_total);
	
	media = (marcacao_final - marcacao_inicio)/litros_gastos;
	custo = litros_gastos * combustivel;
	lucro = valor_total - custo;
	
	printf("A m�dia do consumo km/l � %f.\n", media);
	printf("O lucro liqu�do do dia foi de %f", lucro);
}
