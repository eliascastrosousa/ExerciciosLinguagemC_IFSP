/* Fa�a um programa para adivinhar um n�mero gerado aleatoriamente entre 1 e 10.
A cada tentativa mostrar se o n�mero chutado � maior ou menor que o valor gerado.
Ao acertar, mostrar o n�mero e em quantas tentativas o jogador acertou.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

main() {
setlocale(LC_ALL,"portuguese");
int num, computador;

printf("Digite um numero: ");
scanf("%d", &num);

srand( (unsigned)time(NULL) );
computador = 1 + ( rand() % 10 );

if (num == computador) {
    printf("Voc� acertou! Numero sorteado: %d ", computador);
}else {
    printf("Voc� Errou!! Numero sorteado: %d ", computador);
}
}

