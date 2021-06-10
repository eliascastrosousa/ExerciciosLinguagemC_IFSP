#include <stdio.h>
#include <locale.h>

main() {
setlocale(LC_ALL,"Portuguese");

float sal;

printf("Digite o Salario: ");
scanf("%f",&sal);

if (sal <= 500){
    printf("O valor do salario de %.2f, com aumento de 15%% é de: %.2f", sal, sal*1.15);
}
else if (sal < 1000){
      printf("O valor do salario de %.2f, com aumento de 10%% é de: %.2f", sal, sal*1.10);
}
else {
      printf("O valor do salario de %.2f, com aumento de 5%% é de: %.2f", sal, sal*1.05);
}
}
