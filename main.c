#include <stdio.h>

int main()
{
//Converter de Celsius para Fahrenheit
float celsius = 0.f;
float fahrenheit = 0.f;

printf("Converção de Celsius para Fahrenheit\n");
printf("Digite o grau Celsius: ");
scanf("%f", &celsius);

fahrenheit = (celsius*1.8) + 32;
printf("A conversão do graus Celsius %f para Fahrenheit é %f", celsius, fahrenheit);

return 0;
}