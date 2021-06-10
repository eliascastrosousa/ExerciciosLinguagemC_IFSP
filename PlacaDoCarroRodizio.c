
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

main() {
int num;
setlocale(LC_ALL,"Portuguese");

printf("Digite a ultimo nuemro da placa: ");
scanf("%d",&num);

switch (num){

case 0: printf("Não circular 2° Feira!");
    break;
case 1: printf("Não circular 2° Feira!");
    break;
case 2: printf("Não circular 2° Feira!");
    break;
case 3: printf("Não circular 3° Feira!");
    break;
case 4: printf("Não circular 4° Feira!");
    break;
case 5: printf("Não circular 5° Feira!");
    break;
case 6: printf("Não circular 6° Feira!");
    break;
}
}
