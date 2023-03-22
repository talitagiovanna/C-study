#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main() {
	int v[100], p, aux = 0;
	for (p = 1; p<=100; p++){
		printf("Digite um número: \n");
		scanf("%d", &v[p]);
	}
	for (p = 1; p<=100; p++){
		if (p % 2 != 0){
			if (v[p] % 2 == 0){
				aux=aux+1;
			}
		}
	}
	printf("Temos %d de pares", aux);
}