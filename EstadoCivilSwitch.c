
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

main() {
char caract;
setlocale(LC_ALL,"Portuguese");

printf("Digite a primeira letra do estado civil: ");
scanf("%c",&caract);

switch (toupper(caract)){

case 'S': printf("Solteiro");
    break;
case 'C' : printf("Casado");
    break;
case 'D': printf("Divorciado");
    break;
case 'V': printf("Viúvo");
    break;
default: printf("valor invalido!");
}











}

