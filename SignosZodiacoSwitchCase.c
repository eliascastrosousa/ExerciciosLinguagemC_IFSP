/* Fa�a um programa que leia o dia e o m�s e retorne o signo do zod�aco correspondente ao dia e m�s informado */

#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");

int dia, mes;

printf("\n Ol� %s Seja bem vindo(a)! \n ");

printf("\n Digite o dia que voc� nasceu (1 - 31): ");
scanf("%d", &dia);

printf("\n Digite o mes que voc� nasceu (1 - 12): ");
scanf("%d", &mes);

switch (mes){

case 1: //janeiro
    if ((dia >= 1)&& (dia <=20)){
        printf("\n Dia %d do M�s %d, Seu signo � capricornio! \n", dia,mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Aquario! \n", dia,mes);
    }
    break;

    case 2: //Fevereiro
    if ((dia >= 1)&& (dia <=18)){
        printf("\n Dia %d do M�s %d, Seu signo � Aquario! \n", dia,mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Peixes! \n", dia,mes);
    }
    break;

    case 3: //Mar�o
    if ((dia >= 1)&& (dia <=20)){
        printf("\n Dia %d do M�s %d, Seu signo � Peixes! \n", dia,mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � �ries! \n", dia,mes);
    }
    break;

    case 4: //Abril
    if ((dia >= 1)&& (dia <=19)){
        printf("\n Dia %d do M�s %d, Seu signo � �ries! \n", dia,mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Touro! \n", dia,mes);
    }
    break;

    case 5: //Maio
    if ((dia >= 1)&& (dia <=20)){
        printf("\n Dia %d do M�s %d, Seu signo � Touro! \n", dia,mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � G�meos! \n", dia, mes);
    }
    break;

    case 6: //Junho
    if ((dia >= 1)&& (dia <=21)){
        printf("\n Dia %d do M�s %d, Seu signo � G�meos! \n", dia, mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � C�ncer! \n", dia, mes);
    }
    break;

    case 7: //Julho
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do M�s %d, Seu signo � C�ncer! \n ", dia, mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Le�o! \n ", dia , mes);
    }
    break;

    case 8: //Agosto
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do M�s %d, Seu signo � Le�o! \n", dia , mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Virgem! \n", dia , mes);
    }
    break;

    case 9: //Setembro
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do M�s %d, Seu signo � Virgem! \n ", dia , mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Libra! \n", dia , mes);
    }
    break;

    case 10: //Outubro
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do M�s %d, Seu signo � Libra! \n", dia, mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Escorpi�o! \n", dia, mes);
    }
    break;

    case 11: //Novembro
    if ((dia >= 1)&& (dia <=21)){
        printf("\n Dia %d do M�s %d, Seu signo � Escorpi�o! \n", dia , mes);
    }else {
       printf("\n Dia %d do M�s %d, Seu signo � Sagit�rio! \n", dia , mes);
    }
    break;

    case 12: //Dezembro
    if ((dia >= 1)&& (dia <=21)){
        printf("\n Dia %d do M�s %d, Seu signo � Sagit�rio! \n", dia, mes);
    }else {
        printf("\n Dia %d do M�s %d, Seu signo � Capric�rnio! \n", dia, mes);
    }
    break;

    default: printf("valor invalido!");
}
system("PAUSE");

return 0;
}
