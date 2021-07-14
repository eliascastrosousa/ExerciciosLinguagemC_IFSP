/* Exercício intermediário de Repetição: Faça um algoritmo que leia um número e divida-o por dois (sucessivamente)
 até que o resultado seja menor que 1. Mostre o resultado da última divisão e a quantidade de divisões efetuadas.*/

#include <stdio.h>
#include <locale.h>

 main(){
 setlocale(LC_ALL,"portuguese");

 float num, result;
 int count=0;

 printf("Digite um numero: ");
 scanf("%f", &num);

 result = num;

 while(result >= 1){
    result = result/2;
    count++;

 }
printf("\n\n%.2f / 2: %.2f \n",result*2, result);
printf("O numero %.0f foi dividido %d vezes até chegar em 1.\n", num, count);

}

