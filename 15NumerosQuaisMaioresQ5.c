/* Escreva um programa que receba 15 n�meros e imprima quantos dos n�meros inseridos s�o maiores que 5 */

 #include <stdio.h>
 #include <locale.h>

 main() {

 setlocale(LC_ALL, "portuguese");

 int count=0, num, soma=0;

 while(count<5){
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (num >= 5){
        soma++;
        count++;
    }else {
        count++;
    }
 }
 printf("Dos 5 numeros digitados, %d deles s�o maiores ou iguais a 5.",soma);

 }
