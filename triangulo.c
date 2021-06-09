
#include <stdio.h>
#include <locale.h>

main() {
int x, y, z;
setlocale(LC_ALL,"Portuguese");

printf("Digite o lado x:  ");
scanf("%d", &x);

printf("Digite o lado y:  ");
scanf("%d", &y);

printf("Digite o lado z:  ");
scanf("%d", &z);

if((x < y+z) && (y < x+z) && (z < x+y)){
    printf("Este é um triangulo: ");
    if ((x == y) && (y == z) && (z == x)){
        printf("Equilatero! ");
    }else if ((x != y) && (y != z) && (z != x)) {
        printf("Escaleno! ");
    }
    else {
        printf("isoceles!");
 }
 }else {
    printf("Não é um triangulo! ");
 }




}
