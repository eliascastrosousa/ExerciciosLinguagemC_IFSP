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
setlocale(LC_ALL,"portuguese");
    do{
printf("\nDigite um Número: ");
scanf("%d",&vetor1[count]);

vetor2[count]= vetor1[count];
}while(count=0);

for(count=1; count<=9; count++){

printf("\nDigite um Número: "); // primeiro laço for
scanf("%d",&vetor1[count]);

for(count2=0; count2<TAM; count2++){ // segundo laço for

    if(vetor2[count2]==vetor1[count]){

        printf("\nNUMERO JÁ DIGITADO!!");

        printf("\nPor favor, digite outro número: ");
        scanf("%d",&vetor1[count]);
    }
    if(vetor2[count2] == vetor1[count]){

        printf("\nNUMERO JÁ DIGITADO!!");

        printf("\nPor favor, digite outro número: ");
        scanf("%d",&vetor1[count]);
    }
    vetor2[count2]=vetor1[count];
}//fim do segundo laço
}//fim do primeiro

printf("\nEstes São os Valores inseridos:  ");

for(count=0; count<TAM; count++){
    printf("\n%d",vetor1[count]);
}
} //fim do bloco main
