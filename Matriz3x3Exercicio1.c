/* Dada a matriz MATRIZ1[3][3]= {102,4,5,6,12,34,78,32,45}. Faça uma programa que mostre:
 a soma dos valores da matriz;
a soma dos valores da linha “1”
a soma dos valores da coluna “1”
a multiplicação dos valores da diagonal secundária
 */

#include <stdio.h>
#include <locale.h>

main(){

setlocale(LC_ALL, "portuguese");

int matriz[3][3]={102,4,5,6,12,34,78,32,45},linha,coluna,sum_linha0=0,sum_coluna0=0,soma=0;

for(linha = 0; linha<3; linha++){
    for(coluna = 0; coluna<3; coluna++){
            printf("%5d",matriz[linha][coluna]);

            soma+=matriz[linha][coluna];

            if (linha == 0){
                sum_linha0 += matriz[linha][coluna];
            }

            if (coluna == 0){
                sum_coluna0 += matriz[linha][coluna];
            }
    }
printf("\n");

}

printf("\nA soma das matrizes é igual a: %d \n" , soma);
printf("A soma das matrizes da primeira linha é igual a: %d \n", sum_linha0);
printf("A soma das matrizes da primeira coluna é igual a: %d \n", sum_coluna0);
}
