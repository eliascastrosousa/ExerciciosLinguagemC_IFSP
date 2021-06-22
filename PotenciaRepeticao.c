#include <stdio.h>
#include <locale.h>

/*Escreva um programa que realize a potência de A (número real) por B (número inteiro e positivo), ou seja, AB,
através de multiplicações sucessivas. Esses dois valores são passados pelo usuário através do teclado. */


main(){

setlocale(LC_ALL,"Portuguese");

float base, potencia;
int expoente, zero;
zero = 0;
printf("Digite um número: "); // Primeiro número
scanf("%f",&base);

printf("Digite o Segundo número (expoente:) "); //Expoente
scanf("%d", &expoente);

while(expoente >0){
    potencia = base*base;
    expoente--;
    printf("\t%d\n",potencia);
}

}

/*
for(potencia=base*base; expoente > zero; expoente-- ){
    printf("\t%d\n",potencia);
}

}
do{
    potencia = base*base;
    printf("\t%d\n",potencia);
    expoente--;
} while (expoente > 0);

	printf("fim");
*/
