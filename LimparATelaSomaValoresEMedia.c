/* Armazenar 10 n�meros inteiros no vetor. Limpar a tela exibir: os 10 valores inseridos no vetor, a soma dos valores e a m�dia dos valores
 */

#include <stdio.h>
#include <locale.h>

int main(){

int count, num_int[10], soma;
float media;


setlocale(LC_ALL,"Portuguese");

for(count=0; count < 10; count++){
        printf("digite um numero: ");
        scanf("%d",&num_int[count]);
}
system("cls"); // limpar
printf("Estes s�o os numeros:\n");
printf("-----------------------------------\n\n");

for(count=0; count < 10; count++)
    printf("Numero [%d]: %d \n",count+1 , num_int[count]);

soma += (num_int[count]);
media = (float)soma/count;

printf("------------------------------------\n\n");
printf("A soma dos numeros � igual a %d \n", soma);
printf("A m�dia dos numeros � igual a %.2f \n", media);
printf("------------------------------------\n\n");

}
