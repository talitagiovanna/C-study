#include <stdio.h>


void imprimir_vetor(float*start, float*end){
	for(float*pvet = start; pvet <= end; pvet++){
		printf("%f", (*pvet));
	}
}
int main() {
	float num[8] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
	imprimir_vetor(&num[0], &num[7]);
}

