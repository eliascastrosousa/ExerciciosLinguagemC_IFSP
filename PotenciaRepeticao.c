#include <stdio.h>
#include <locale.h>

/*Escreva um programa que realize a pot�ncia de A (n�mero real) por B (n�mero inteiro e positivo), ou seja, AB,
atrav�s de multiplica��es sucessivas. Esses dois valores s�o passados pelo usu�rio atrav�s do teclado. */


main(){

setlocale(LC_ALL,"Portuguese");

float base, potencia;
int expoente, contador;

contador=1;

printf("Digite um n�mero: "); // Primeiro n�mero
scanf("%f",&base);

printf("Digite o Segundo n�mero (expoente): "); // Expoente
scanf("%d", &expoente);

potencia = base;

while(contador < expoente){ //enquanto o contador for menor que o expoente:
    potencia = potencia*expoente;
    contador++;
    printf("%.0f X %d = %.0f\n", base, expoente, potencia);
}
printf("A base %.0f elevado a %d � igual a: %.0f",base, expoente, potencia);

}
