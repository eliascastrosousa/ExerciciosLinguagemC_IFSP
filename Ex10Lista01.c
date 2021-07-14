/* Uma empresa irá dar um aumento de salário aos seus funcionários de acordo com a categoria de cada empregado. O aumento seguirá a seguinte regra:
• Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o salário;
• Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre o salário;
• Funcionários das categorias K e R ganharão 25% de aumento sobre o salário;
• Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento sobre o salário;
• Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento sobre o salário.
Faça um algoritmo que escreva nome, categoria e salário reajustado de cada empregado. A empresa possui N funcionários. */

#include <stdio.h>
#include <locale.h>
#define TAM 30

int main(){

    setlocale(LC_ALL, "portuguese");

    int c=0, func, cat;
    float sal, sal_final;
    char nome[TAM];

    printf("===== SEJA BEM VINDX!! ======");
    printf("\n\nDigite o número de funcionarios: ");
    scanf("%i", &func);

do{
    printf("\nFuncionários das CATEGORIAS: A, C, F, e H = 1\nFuncionários das CATEGORIAS: B, D, E, I, J e T = 2\nFuncionários das CATEGORIAS: K e R = 3\nFuncionários das CATEGORIAS: L, M, N, O, P, Q e S = 4\nFuncionários das CATEGORIAS: U, V, X, Y, W e Z = 5");


    printf("\nDigite qual a CATEGORIA:");
    scanf("%i",&cat);
    printf("\nDigite o primeiro nome dx funcionarix: ");
    scanf("%s",&nome);
    printf("\nDigite o salario dx funcionarix: ");
    scanf("%f",&sal);

        switch(cat){
            case 1:
                sal_final=sal*1.10;
            break;
            case 2:
                sal_final=sal*1.15;
            break;
            case 3:
                sal_final=sal*1.25;
            break;
            case 4:
                sal_final=sal*1.35;
            break;
            case 5:
                sal_final=sal*1.50;
            break;
            default:
                printf("\nCódigo Incorreto, Tente novamente!");
            break;
        }


        printf("\n Funcionarix %s da CATEGORIA %i passará a receber: R$%.2f com o reajuste Salarial.", nome,cat,sal_final);
        c = c+1;
    }while(c<func);
}
