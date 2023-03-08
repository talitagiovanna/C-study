#include <stdio.h>

int main()
{
// calcular o antecessor e o sucessor de um número
int num = 0;
int sucessor = 0;
int antecessor = 0;

printf("O antecessor e o sucessor de um numero\n");
printf("Digite um número: ");
scanf("%d", &num);

sucessor = num + 1;
antecessor = num - 1;

printf("\n O antecessor do número %d é o %d.\n O sucessor do número %d é o %d.\n", num, antecessor, num, sucessor);

return 0;
}