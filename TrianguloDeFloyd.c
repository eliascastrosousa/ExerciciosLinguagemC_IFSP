/* Escreva um programa que leia um numero inteiro positivo 'n' e em seguida imprima
'n' linhas do chamado Triangulo de Floyd. Para n = 6, temos: */

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "portuguese");

int n, count;
count = 1;
printf("Digite um numero: ");
scanf("%d", &n);

while(count < n){
    printf("%d " , count);
    count++;
}


}
