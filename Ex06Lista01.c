/* Exerc�cio Dif�cil de Decis�o: Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o.
 Para estar em condi��es, um dos seguintes requisitos deve ser satisfeito:
 - Ter no m�nimo 65 anos de idade.
 - Ter trabalhado no m�nimo 30 anos.
 - Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos.
 Com base nas informa��es acima, fa�a um algoritmo que leia:
 o n�mero do empregado (c�digo), o ano de seu nascimento e o ano de seu ingresso na empresa.
 O programa dever� escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'N�o requerer'. */


#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "portuguese");
int num, year, year_ingress, years_old, work;
printf("Digite o n�mero do empregado(C�digo):  ");
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
    printf("N�o Requerer aposentadoria");
}
}

