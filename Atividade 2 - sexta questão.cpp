#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//SEXTA QUEST�O
main (){
	int prestacao, prestacao_paga, prestacao_restante;
	float valor_atual, saldo_devedor;
	
	printf("Digite o n�mero total das presta��es: \n");
	scanf("%d", &prestacao);
	printf("Digite o total das presta��es pagas: \n");
	scanf("%d", &prestacao_paga);
	printf("Informe o valor atual da presta��o: \n");
	scanf("%f", &valor_atual);
	
	prestacao_restante = prestacao - prestacao_paga;
	saldo_devedor = valor_atual*prestacao_restante;
	
	printf("O saldo devedor � %f e a quantidade de presta��es a serem pagas � %d", saldo_devedor, prestacao_restante);
}
