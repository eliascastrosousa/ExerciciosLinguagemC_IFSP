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
setlocale(LC_ALL,"portuguese");
    do{
printf("\nDigite um N�mero: ");
scanf("%d",&vetor1[count]);

vetor2[count]= vetor1[count];
}while(count=0);

for(count=1; count<=9; count++){

printf("\nDigite um N�mero: "); // primeiro la�o for
scanf("%d",&vetor1[count]);

for(count2=0; count2<TAM; count2++){ // segundo la�o for

    if(vetor2[count2]==vetor1[count]){

        printf("\nNUMERO J� DIGITADO!!");

        printf("\nPor favor, digite outro n�mero: ");
        scanf("%d",&vetor1[count]);
    }
    if(vetor2[count2] == vetor1[count]){

        printf("\nNUMERO J� DIGITADO!!");

        printf("\nPor favor, digite outro n�mero: ");
        scanf("%d",&vetor1[count]);
    }
    vetor2[count2]=vetor1[count];
}//fim do segundo la�o
}//fim do primeiro

printf("\nEstes S�o os Valores inseridos:  ");

for(count=0; count<TAM; count++){
    printf("\n%d",vetor1[count]);
}
} //fim do bloco main
