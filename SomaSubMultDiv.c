#include <stdio.h>
#include <locale.h>

//Fa�a um algoritmo para receber dois valores e mostre o resultado das opera��es de: subtra��o, multiplica��o e divis�o para os valores recebidos.

main(){

setlocale(LC_ALL, "portuguese");
float n1, n2, sum, sub,mult, div ;

printf("Digite um valor: ");
scanf("%f", &n1);

printf("Digite outro valor: ");
scanf("%f", &n2);

sum = n1+n2;
printf("\nA soma de %.2f e %.2f � igual a %.2f \n\n", n1, n2, sum);

sub = n1-n2;
printf("A subtra��o de %.2f e %.2f � igual a %.2f \n\n", n1, n2, sub);

mult = n1*n2;
printf("A multiplica��o de %.2f e %.2f � igual a %.2f \n\n", n1, n2, mult);

div = n1/n2;
printf("A divis�o de %.2f e %.2f � igual a %.2f \n\n", n1, n2, div);







}
