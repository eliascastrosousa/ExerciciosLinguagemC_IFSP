/* Fa�a um algoritmo que leia um n�mero e divida-o por dois (sucessivamente) ate que o resultado seja menor que 1.
 Mostre o resultado da ultima divis�o e a quantidade de divis�es efetuadas. */

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
    printf("%.2f \n",result);
    count++;

 }
printf("%.2f / 2: %.2f \n",result*2, result);
printf("O numero %.0f foi dividido %d vezes at� chegar em 1.\n", num, count);


}
