#include <stdio.h>
#include <math.h>

typedef struct {
	float x;
	float y;
} Ponto2D;

void imprimePonto (Ponto2D p){
	printf("O ponto fornecido foi: (%f, %f)\n", p.x, p.y);
}

int main() {
	
	Ponto2D p1 = {0.0, 4.5};
	imprimePonto(p1);
	return 0;
}
