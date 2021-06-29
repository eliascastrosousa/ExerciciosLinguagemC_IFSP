#include <stdio.h>
#include <locale.h>

//Faça um algoritmo para receber dois valores e mostre o resultado das operações de: subtração, multiplicação e divisão para os valores recebidos.

main(){

setlocale(LC_ALL, "portuguese");
float n1, n2, soma, sub, div, mult;

printf("Digite um valor: ");
scanf("%f", &n1);

printf("Digite outro valor: ");
scanf("%f", &n2);

soma = n1+n2;
printf("A soma de %.2f e %.2f é igual a %.2f \n", n1, n2, soma);

sub = n1-n2;
printf("A subtração de %.2f e %.2f é igual a %.2f \n", n1, n2, sub);

mult = n1*n2;
printf("A multiplicação de %.2f e %.2f é igual a %.2f \n", n1, n2, mult);

div = n1/n2;
printf("A divisão de %.2f e %.2f é igual a %.2f \n", n1, n2, div);







}
