#include <stdio.h>
#include <math.h>

struct Ponto2D {
	float x;
	float y;
};

struct Reta2D {
	struct Ponto2D p1;
	struct Ponto2D p2;
};

float tamanhoSegmento(struct Reta2D reta) 
{
	return sqrt((reta.p1.x - reta.p2.x)*(reta.p1.x - reta.p2.x) + (reta.p1.y - reta.p2.y)*(reta.p1.y - reta.p2.y));
};

int main() {
	struct Reta2D r1;
	float tamanho = 0.f;
	
	r1.p1.x = 0;
	r1.p1.y = 0;
	
	r1.p2.x = 10;
	r1.p2.y = 3;
	
	tamanho = tamanhoSegmento(r1);
	
	printf("O tamanho do segmento é %f", tamanho);
}
