#include <stdio.h>
#include <locale.h>

/*Escreva um programa que realize a pot�ncia de A (n�mero real) por B (n�mero inteiro e positivo), ou seja, AB,
atrav�s de multiplica��es sucessivas. Esses dois valores s�o passados pelo usu�rio atrav�s do teclado. */


main(){

setlocale(LC_ALL,"Portuguese");

float base, potencia;
int expoente, zero;
zero = 0;
printf("Digite um n�mero: "); // Primeiro n�mero
scanf("%f",&base);

printf("Digite o Segundo n�mero (expoente:) "); //Expoente
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
