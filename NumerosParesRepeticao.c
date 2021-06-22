#include <stdio.h>
#include <locale.h>

/* Criar um programa que leia os limites inferior e superior de um intervalo e imprima todos os
números pares no intervalo aberto e seu somatório. Suponha que os dados digitados são para um
intervalo crescente, ou seja, o primeiro valor DEVE ser menor que o segundo. */



main(){

setlocale(LC_ALL,"portuguese");

int inf, sup, soma;
soma = 0;

printf("Digite o Limite Inferior: ");
scanf("%d", &inf);

printf("Digite o Limite Superior: ");
scanf("%d", &sup);

printf("O numero Inferior %d e o numero superior %d tem os seguintes numeros pares: \n", inf, sup);

while (inf <= sup ) {
    if (inf%2 == 0){
            printf("O numero %d \n ", inf);
            soma += inf;
            inf++;

    }else {
            inf++;
    }
}
printf("E a soma de todos os numeros é igual a: %d", soma);
}
