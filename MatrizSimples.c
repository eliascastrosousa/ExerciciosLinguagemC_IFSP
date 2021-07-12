#include <stdio.h>
#define TAM 6

/*
Receber 5 valores e imprimi-los na tela.
*/

main(){

int vetor[TAM],a=1,c;

while(a<TAM){
    printf("vetor %d: ", a);
    scanf("%d",&vetor[a]);
    a++;
}
for(c=1;c<TAM;c++){
    printf("\n\nVetor %d: %d\n",c,vetor[c]);
}
}

