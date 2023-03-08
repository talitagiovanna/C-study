#include <stdio.h>

int main ()
{
// média aritmética de três números dados
float num = 0.f;
float num_2 = 0.f;
float num_3 = 0.f;
float media = 0.f;

printf ("Digite um  número: ");
scanf ("%f", &num);
printf ("Digite um número: ");
scanf ("%f", &num_2);
printf ("Digite um número: ");
scanf ("%f", &num_3);

media = (num + num_2 + num_3) / 3;
printf ("\nA média dos números: %f, %f e %f é %f", num, num_2, num_3,
media);

return 0;
}