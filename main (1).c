#include <stdio.h>

int main()
{
//Calcular a área de um círculo
float area = 0.f;
float raio = 0.f;
float pi = 3.14;

printf("Calculando a área de um círculo.\n");
printf("Digite o raio do círculo: ");
scanf("%f", &raio);

area = pi*(raio*raio);
printf("A área do círculo de raio %f é: %f", raio, area);

return 0;
}