/* Faça um algoritmo que receba o valor do salário de uma pessoa e o valor de um financiamento pretendido.
Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o algoritmo deverá escrever
"Financiamento Concedido"; senão, ele deverá escrever "Financiamento Negado".
Independente de conceder ou não o financiamento, o algoritmo escreverá depois a frase "Obrigado por nos consultar.“*/

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
