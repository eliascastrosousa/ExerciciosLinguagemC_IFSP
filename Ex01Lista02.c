/*
Faça um programa para ler 10 números diferentes a serem armazenados em um vetor.
Os números deverão ser armazenados na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente,
o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
verificando se ele existe entre os números que já fornecidos. Exiba na tela o vetor final que foi digitado.
*/

#include <stdio.h>
#include <locale.h>
#define TAM 10
int vetor1[TAM],vetor2[TAM],count,count2;

main(){
    for(count=1;count<=TAM;count++){
        printf("\nDigite o valor número %d: ",count);
        scanf("%d",&vetor[count]);
    }
    printf("\n");
    for(count2=1;count2<=TAM;count2++){
        printf("%d ",vetor[count2]);
}
}
