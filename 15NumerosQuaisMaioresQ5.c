/* Escreva um programa que receba 15 números e imprima quantos dos números inseridos são maiores que 5 */

 #include <stdio.h>
 #include <locale.h>

 main() {

 setlocale(LC_ALL, "portuguese");

 int count=0, num, soma=0;
 while(count<15){
    printf("Digite um número: ");
    scanf("%d", &num);
    count++;
    if (num >= 5){
        soma ++;
    }
 }

 }
