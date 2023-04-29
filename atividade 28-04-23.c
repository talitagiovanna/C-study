#include <stdio.h>
#include <string.h>
int main()
{
	int x = 2;
	char str1[] = "abcd";
	char str2[] = "ola!";
	
	printf("x:\n Endereco: %d\n Tamanho: %d\n Conteudo: %d\n\n", &x, sizeof(x), x);
	printf("str1:\n Endereco: %d\n Tamanho: %d\n Conteudo: %s\n\n", str1, sizeof(str1), str1);
	printf("str2:\n Endereco: %d\n Tamanho: %d\n Conteudo: %s\n\n", str2, sizeof(str2), str2);
	printf("str2:\n Endereco: %d\n Tamanho: %d\n Conteudo: %s\n\n", &str2[0], sizeof(char)*(strlen(str2)+1), str2);
	
	return 0;
}
