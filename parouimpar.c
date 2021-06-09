
#include <stdio.h>
#include <locale.h>

main() {
int num;
setlocale(LC_ALL,"Portuguese");
printf("Digite um numero: ");
scanf("%d", &num);

if (num%2 == 0 ){
    printf("O numero %d é Par", num);
}else {
printf("O numero %d é impar", num);
}

}
