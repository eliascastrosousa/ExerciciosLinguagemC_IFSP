#include <stdio.h>
#include <locale.h>
// Escreva um algoritmo para calcular e mostrar a metade de um número qualquer informado pelo usuário.
main(){
setlocale(LC_ALL, "portuguese");
float n1, half;
printf("Digite um valor: ");
scanf("%f", &n1);
half = (n1/2);
printf("A metade de %.2f é %.2f", n1, half);

}
