#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int qtdNumeros, contador = 0;
	float* numeros;
	float soma = 0.0;
	do {
		printf("Quantidade e numeros?:\n");
		scanf("%d", &qtdNumeros);
	}
	while (qtdNumeros <= 0);
	numeros = (float*) malloc(qtdNumeros*sizeof(float));
	if (numeros != NULL) {
		while (contador < qtdNumeros) {
			scanf("%f", &numeros[contador]);
			soma = soma + numeros[contador];
			contador++;
		}
		printf("media: %f", soma/contador);
		free(numeros);
	}
	return 0;
}
