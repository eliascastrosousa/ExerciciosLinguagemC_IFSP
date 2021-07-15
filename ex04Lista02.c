/* 4. Faça um programa para ler um vetor A de inteiros com 10 elementos. Construir um vetor B de mesmo tipo,
sendo que cada elemento de B deverá ser a metade de cada elemento de A. Apresentar os elementos dos vetores A e B. */

#include <stdio.h>
#include <locale.h>
#define TAM 10

main(){
    setlocale(LC_ALL,"portuguese");

    int vetorA[TAM],vetorB[TAM],a;

    for(a=0;a<TAM; a++){
        printf("\nDigite o elemento do vetor A posição %d: ",a+1);
        scanf("%d",&vetorA[a]);
        vetorB[a]= vetorA[a]/2;
    }
    printf("\nElementos do vetor A: ");
    for(a=0;a<TAM; a++){

        printf("%d ",vetorA[a]);
    }
    printf("\nElementos do vetor B: ");
    for(a=0;a<TAM; a++){

        printf("%d ",vetorB[a]);
    }
    printf("\n\n");
}
