/*Criar um programa que leia os limites inferior e superior de um intervalo e imprima todos os n�meros
 pares no intervalo aberto e seu somat�rio. Suponha que os dados digitados s�o para um intervalo crescente,
  ou seja, o primeiro valor � menor que o segundo. */

#include <stdio.h>
#include <locale.h>

main() {

setlocale(LC_ALL, "Portuguese");

int inf, sup, numero, cont, soma;

soma =0;

do {
    printf("Limite inf: ");
    scanf("%d",&inf);

    printf("Limite sup: ");
    scanf("%d",&sup);

}while (inf > sup);
inf++;
sup--;
for(cont=inf; cont <= sup; cont++ ){

    if (cont % 2 == 0){
    printf("Resultado: %d\n",cont);

    soma += cont;
    }
}
printf("Soma dos pares �: %d\n ",soma);
}

