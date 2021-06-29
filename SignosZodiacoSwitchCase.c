/* Faça um programa que leia o dia e o mês e retorne o signo do zodíaco correspondente ao dia e mês informado */

#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");

int dia, mes;

printf("\n Olá %s Seja bem vindo(a)! \n ");

printf("\n Digite o dia que você nasceu (1 - 31): ");
scanf("%d", &dia);

printf("\n Digite o mes que você nasceu (1 - 12): ");
scanf("%d", &mes);

switch (mes){

case 1: //janeiro
    if ((dia >= 1)&& (dia <=20)){
        printf("\n Dia %d do Mês %d, Seu signo é capricornio! \n", dia,mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Aquario! \n", dia,mes);
    }
    break;

    case 2: //Fevereiro
    if ((dia >= 1)&& (dia <=18)){
        printf("\n Dia %d do Mês %d, Seu signo é Aquario! \n", dia,mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Peixes! \n", dia,mes);
    }
    break;

    case 3: //Março
    if ((dia >= 1)&& (dia <=20)){
        printf("\n Dia %d do Mês %d, Seu signo é Peixes! \n", dia,mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Áries! \n", dia,mes);
    }
    break;

    case 4: //Abril
    if ((dia >= 1)&& (dia <=19)){
        printf("\n Dia %d do Mês %d, Seu signo é Áries! \n", dia,mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Touro! \n", dia,mes);
    }
    break;

    case 5: //Maio
    if ((dia >= 1)&& (dia <=20)){
        printf("\n Dia %d do Mês %d, Seu signo é Touro! \n", dia,mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Gêmeos! \n", dia, mes);
    }
    break;

    case 6: //Junho
    if ((dia >= 1)&& (dia <=21)){
        printf("\n Dia %d do Mês %d, Seu signo é Gêmeos! \n", dia, mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Câncer! \n", dia, mes);
    }
    break;

    case 7: //Julho
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do Mês %d, Seu signo é Câncer! \n ", dia, mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Leão! \n ", dia , mes);
    }
    break;

    case 8: //Agosto
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do Mês %d, Seu signo é Leão! \n", dia , mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Virgem! \n", dia , mes);
    }
    break;

    case 9: //Setembro
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do Mês %d, Seu signo é Virgem! \n ", dia , mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Libra! \n", dia , mes);
    }
    break;

    case 10: //Outubro
    if ((dia >= 1)&& (dia <=22)){
        printf("\n Dia %d do Mês %d, Seu signo é Libra! \n", dia, mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Escorpião! \n", dia, mes);
    }
    break;

    case 11: //Novembro
    if ((dia >= 1)&& (dia <=21)){
        printf("\n Dia %d do Mês %d, Seu signo é Escorpião! \n", dia , mes);
    }else {
       printf("\n Dia %d do Mês %d, Seu signo é Sagitário! \n", dia , mes);
    }
    break;

    case 12: //Dezembro
    if ((dia >= 1)&& (dia <=21)){
        printf("\n Dia %d do Mês %d, Seu signo é Sagitário! \n", dia, mes);
    }else {
        printf("\n Dia %d do Mês %d, Seu signo é Capricórnio! \n", dia, mes);
    }
    break;

    default: printf("valor invalido!");
}
system("PAUSE");

return 0;
}
