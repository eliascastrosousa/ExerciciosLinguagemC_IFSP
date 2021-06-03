#include <locale.h>;

int main(void) {
setlocale(LC_ALL,"portuguese");

int n1, n2;

printf("Digite um numero: ");
scanf("%d",&n1);

printf("Digite o segundo numero: ");
scanf("%d",&n2);

if (n1>n2){
printf("O numero %d é maior que o %d",n1,n2);
}
else if(n1<n2){
printf("O numero %d é maior que o %d",n2,n1);
}

else{
    printf("Os dois são iguais.");
}
}

