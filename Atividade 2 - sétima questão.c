#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//SÉTIMA QUESTÃO
main (){
	float combustivel, valor_total, lucro, custo, marcacao_inicio, marcacao_final, litros_gastos, media;
	
	printf("Informe o preço do combustível: \n");
	scanf("%f", &combustivel);
	printf("Informe a marcação do ínicio do dia: \n");
	scanf("%f", &marcacao_inicio);
	printf("Informe a marcação do final do dia: \n");
	scanf("%f", &marcacao_final);
	printf("Informe a quantidade de litros gastos: \n");
	scanf("%f", &litros_gastos);
	printf("Informe o valor total recebido dos passageiros: \n");
	scanf("%f", &valor_total);
	
	media = (marcacao_final - marcacao_inicio)/litros_gastos;
	custo = litros_gastos * combustivel;
	lucro = valor_total - custo;
	
	printf("A média do consumo km/l é %f.\n", media);
	printf("O lucro liquído do dia foi de %f", lucro);
}