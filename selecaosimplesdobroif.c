#include <locale.h>;

int main(void) {
setlocale(LC_ALL,"portuguese");

int n1;

printf("Digite um n�mero: ");
scanf("%d", &n1);

if (n1 < 100){
    printf("O n�mero e igual a: %d e o dobro �: %d",n1,n1*2);
}

return(0);
}
