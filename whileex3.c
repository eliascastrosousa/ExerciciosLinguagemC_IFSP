#include <stdio.h>
#include <locale.h>

main() {
int num1, soma = 0;

printf("digite um valor: ");
scanf("%d",&num1);

do {
   soma += num1;
   printf("Digite outro valor: ");
   scanf("%d",&num1);
}while (num1 >= 0);
    printf("%d",soma);


}
