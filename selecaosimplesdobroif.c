#include <locale.h>;

int main(void) {
setlocale(LC_ALL,"portuguese");

int n1;

printf("Digite um número: ");
scanf("%d", &n1);

if (n1 < 100){
    printf("O número e igual a: %d e o dobro é: %d",n1,n1*2);
}

return(0);
}
