#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main() {
		
	int v[50], p;
	for (p = 1; p<=50; p++){
		printf("Digite um número: ");
		scanf("%d", &v[p]);
	}
	for(p = 1; p<=50; p++){
		if (p % 2 == 0){
			printf("\nv[%d] = %d", p, v[p]);
		}
	}
}
