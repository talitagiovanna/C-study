#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int meses_faltando(int mes_atual) {
    int meses_restantes;
    meses_restantes = 12 - mes_atual;
    return meses_restantes;
}

main () {
    int mes_atual;

    printf("Digite um número que represente o mês atual: \n");
    scanf("%d", &mes_atual);

    int meses_restantes = meses_faltando(mes_atual);
    printf("Faltam %d meses para o final do ano.\n", meses_restantes);
}