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

printf("Entre o numero %d e %d temos os seguintes números pares: \n", inf, sup);

while (inf <= sup ) {
    if (inf%2 == 0){
            printf("%d \n",inf);
            soma += inf;
            inf++;

    }else {
            inf++;
    }
}
printf("A soma de todos os números pares é igual a: %d", soma);
}
