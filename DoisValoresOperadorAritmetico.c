
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

main() {
float num1, num2;
char operador;


setlocale(LC_ALL,"Portuguese");

printf("Digite o operador (+  -  *  /): ");
scanf("%c",&operador);

printf("Digite o primeiro valor: ");
scanf("%f",&num1);

printf("Digite o segundo valor: ");
scanf("%f",&num2);



switch (operador){

case '+': printf("a soma dos dois numeros �: %f",num1+num2);
    break;
case '-': printf("a subtra��o dos dois numeros �: %f",num1-num2);
    break;
case '*': printf("a multiplica��o dos dois numeros �: %f",num1*num2);
    break;
case '/': printf("a divis�o dos dois numeros �: %f",num1/num2);
    break;
default : printf("digite o valor corretamente");
}

}
