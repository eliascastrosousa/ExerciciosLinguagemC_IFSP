/*
Fa�a um programa para ler 10 n�meros diferentes a serem armazenados em um vetor.
Os n�meros dever�o ser armazenados na ordem em que forem lidos, sendo que, caso o usu�rio digite um n�mero que j� foi digitado anteriormente,
o programa dever� pedir a ele para digitar outro n�mero. Note que cada valor digitado pelo usu�rio deve ser pesquisado no vetor,
verificando se ele existe entre os n�meros que j� fornecidos. Exiba na tela o vetor final que foi digitado.
*/

#include <stdio.h>
#include <locale.h>
#define TAM 10
int vetor1[TAM],vetor2[TAM],count,count2;

main(){
    for(count=1;count<=TAM;count++){
        printf("\nDigite o valor n�mero %d: ",count);
        scanf("%d",&vetor[count]);
    }
    printf("\n");
    for(count2=1;count2<=TAM;count2++){
        printf("%d ",vetor[count2]);
}
}
