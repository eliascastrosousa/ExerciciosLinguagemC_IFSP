/* Escreva um programa que receba 15 n�meros e imprima quantos dos n�meros inseridos s�o maiores que 5 */

 #include <stdio.h>
 #include <locale.h>

 main() {

 setlocale(LC_ALL, "portuguese");

 int count=0, num, soma=0;
 while(count<15){
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    count++;
    if (num >= 5){
        soma ++;
    }
 }

 }
