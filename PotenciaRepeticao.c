#include <stdio.h>
#include <locale.h>

/*Escreva um programa que realize a potência de A (número real) por B (número inteiro e positivo), ou seja, AB,
através de multiplicações sucessivas. Esses dois valores são passados pelo usuário através do teclado. */


main(){

setlocale(LC_ALL,"Portuguese");

float base, potencia;
int expoente, contador;

contador=1;

printf("Digite um número: "); // Primeiro número
scanf("%f",&base);

printf("Digite o Segundo número (expoente): "); // Expoente
scanf("%d", &expoente);

potencia = base;

while(contador < expoente){ //enquanto o contador for menor que o expoente:
    potencia = potencia*expoente;
    contador++;
    printf("%.0f X %d = %.0f\n", base, expoente, potencia);
}
printf("A base %.0f elevado a %d é igual a: %.0f",base, expoente, potencia);

}
