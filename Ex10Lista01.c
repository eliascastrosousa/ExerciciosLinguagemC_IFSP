/* Uma empresa ir� dar um aumento de sal�rio aos seus funcion�rios de acordo com a categoria de cada empregado. O aumento seguir� a seguinte regra:
� Funcion�rios das categorias A, C, F, e H ganhar�o 10% de aumento sobre o sal�rio;
� Funcion�rios das categorias B, D, E, I, J e T ganhar�o 15% de aumento sobre o sal�rio;
� Funcion�rios das categorias K e R ganhar�o 25% de aumento sobre o sal�rio;
� Funcion�rios das categorias L, M, N, O, P, Q e S ganhar�o 35% de aumento sobre o sal�rio;
� Funcion�rios das categorias U, V, X, Y, W e Z ganhar�o 50% de aumento sobre o sal�rio.
Fa�a um algoritmo que escreva nome, categoria e sal�rio reajustado de cada empregado. A empresa possui N funcion�rios. */

#include <stdio.h>
#include <locale.h>
#define TAM 30

int main(){

    setlocale(LC_ALL, "portuguese");

    int c=0, func, cat;
    float sal, sal_final;
    char nome[TAM];

    printf("===== SEJA BEM VINDX!! ======");
    printf("\n\nDigite o n�mero de funcionarios: ");
    scanf("%i", &func);

do{
    printf("\nFuncion�rios das CATEGORIAS: A, C, F, e H = 1\nFuncion�rios das CATEGORIAS: B, D, E, I, J e T = 2\nFuncion�rios das CATEGORIAS: K e R = 3\nFuncion�rios das CATEGORIAS: L, M, N, O, P, Q e S = 4\nFuncion�rios das CATEGORIAS: U, V, X, Y, W e Z = 5");


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
                printf("\nC�digo Incorreto, Tente novamente!");
            break;
        }


        printf("\n Funcionarix %s da CATEGORIA %i passar� a receber: R$%.2f com o reajuste Salarial.", nome,cat,sal_final);
        c = c+1;
    }while(c<func);
}
