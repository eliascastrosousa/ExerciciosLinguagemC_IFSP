/* Fa�a um algoritmo que receba o valor do sal�rio de uma pessoa e o valor de um financiamento pretendido.
Caso o financiamento seja menor ou igual a 5 vezes o sal�rio da pessoa, o algoritmo dever� escrever
"Financiamento Concedido"; sen�o, ele dever� escrever "Financiamento Negado".
Independente de conceder ou n�o o financiamento, o algoritmo escrever� depois a frase "Obrigado por nos consultar.�*/

#include <stdio.h>
#include <locale.h>

main(){

float wage, financing, wageplus;

printf("Digite o Seu salario: ");
scanf("%f", &wage);

printf("Digite o Valor que deseja Financiar: ");
scanf("%f", &financing);

wageplus = wage*5;

if (financing <= wageplus){
    printf("EMPRESTIMO CONCEDIDO");
}else {
printf("EMPRESTIMO NEGADO");
}}
