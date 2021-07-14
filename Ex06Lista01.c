/* Exercício Difícil de Decisão: Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
 Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
 - Ter no mínimo 65 anos de idade.
 - Ter trabalhado no mínimo 30 anos.
 - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
 Com base nas informações acima, faça um algoritmo que leia:
 o número do empregado (código), o ano de seu nascimento e o ano de seu ingresso na empresa.
 O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'. */


#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "portuguese");
int num, year, year_ingress, years_old, work;
printf("Digite o número do empregado(Código):  ");
scanf("%d", &num);
printf("Digite o ano de nascimento:  ");
scanf("%d", &year);
printf("Digite o ano de seu ingresso na empresa:  ");
scanf("%d", &year_ingress);
years_old = 2021-year;
work = 2021-year_ingress;
if(years_old >= 65){
    printf("Requerer aposentadoria");
}else if (work >= 30){
    printf("Requerer aposentadoria");
}else if (years_old >= 60 && work >= 25){
    printf("Requerer aposentadoria");
}else{
    printf("Não Requerer aposentadoria");
}
}

