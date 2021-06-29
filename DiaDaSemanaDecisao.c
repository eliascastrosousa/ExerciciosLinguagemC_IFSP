// Escreva um algoritmo que leia um número equivalente a um dia da semana e escreva por extenso o dia correspondente
// (1 – domingo, 2 – segunda ...). Exiba a mensagem “valor inválido”, se o número digitado não corresponder a nenhum dia(1 a 7

#include <stdio.h>
#include <locale.h>

main(){

setlocale(LC_ALL, "portuguese");

int num;

printf("Digite um numero de 1 a 7 e será mostrado o dia da semana equivalente a este numero.\nDigite: ");
scanf("%d",&num);

if (num == 1){
    printf("Numero Digitado %d: DOMINGO!",num);
} else if (num == 2){
    printf("Numero Digitado %d: SEGUNDA!",num);
} else if (num == 3){
    printf("Numero Digitado %d: TERÇA!",num);
} else if (num == 4){
    printf("Numero Digitado %d: QUARTA!",num);
} else if (num == 5){
    printf("Numero Digitado %d: QUINTA!",num);
}else if (num == 6){
    printf("Numero Digitado %d: SEXTA!",num);
}else if (num == 7){
    printf("Numero Digitado %d: SABADO!",num);
}else {
    printf("VALOR INCORRETO");
}






}
