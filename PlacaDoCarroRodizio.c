
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

main() {
int num;
setlocale(LC_ALL,"Portuguese");

printf("Digite a ultimo nuemro da placa: ");
scanf("%d",&num);

switch (num){

case 0: printf("N�o circular 2� Feira!");
    break;
case 1: printf("N�o circular 2� Feira!");
    break;
case 2: printf("N�o circular 2� Feira!");
    break;
case 3: printf("N�o circular 3� Feira!");
    break;
case 4: printf("N�o circular 4� Feira!");
    break;
case 5: printf("N�o circular 5� Feira!");
    break;
case 6: printf("N�o circular 6� Feira!");
    break;
}
}
