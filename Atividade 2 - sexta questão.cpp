#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//SEXTA QUESTÃO
main (){
	int prestacao, prestacao_paga, prestacao_restante;
	float valor_atual, saldo_devedor;
	
	printf("Digite o número total das prestações: \n");
	scanf("%d", &prestacao);
	printf("Digite o total das prestações pagas: \n");
	scanf("%d", &prestacao_paga);
	printf("Informe o valor atual da prestação: \n");
	scanf("%f", &valor_atual);
	
	prestacao_restante = prestacao - prestacao_paga;
	saldo_devedor = valor_atual*prestacao_restante;
	
	printf("O saldo devedor é %f e a quantidade de prestações a serem pagas é %d", saldo_devedor, prestacao_restante);
}
