/* Faça um programa para ler uma matriz A de duas dimensões com 5 linhas e 4 colunas.
Construir uma matriz B de mesma dimensão, onde cada elemento da matriz B deverá ser o fatorial de
cada elemento correspondente da matriz A . Apresentar ao final as matrizes A e B. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){

setlocale(LC_ALL,"portuguese");

int matrizA[5][4]={0};
int matrizB[5][4]={0};
int fatorial, c, cc;

    //setlocale(LC_ALL, "portuguese");
    //int A[5][4], B[5][4], fat;

for(c =0; c<5; c++){
    for(cc = 0; cc<4; cc++){
        printf("Digite o Valor da matrizA[%d][%d]: ", c,cc);
        scanf("%d", &matrizA[c][cc]);
        }
    }printf("\n");

printf("Resultado da Primeira Matriz: \n\n ");

for(c=0; c<5; c++){
    for(cc =0; cc<4; cc++){
        printf("[%d]", matrizA[c][cc]);
            if(cc ==3){
                printf("\n");
            }
        }
    }
printf("\n");

for(c = 0; c<5; c++){
    for(cc=0; cc<4; cc++){
        for(fatorial = 1; matrizA[c][cc] > 1; matrizA[c][cc] = matrizA[c][cc]-1){
            fatorial = (fatorial*matrizA[c][cc]);
            matrizB[c][cc] = fatorial;
            }
        }
    }
printf("RESULTADO: \n\n");
for(c = 0;c<5;c++){
    for(cc = 0; cc < 4; cc++){
        printf("[%d]", matrizB[c][cc]);
        if(cc == 3){
            printf("\n");
            }
        }
    }
}
