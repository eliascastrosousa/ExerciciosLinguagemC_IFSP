/* Fa�a um programa para ler uma matriz A de duas dimens�es com 5 linhas e 4 colunas.
Construir uma matriz B de mesma dimens�o, onde cada elemento da matriz B dever� ser o fatorial de
cada elemento correspondente da matriz A . Apresentar ao final as matrizes A e B. */

#include <stdio.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"portuguese");

int matrizA[5][4]={0};
int matrizB[5][4]={0};
int fatorial[5][4]={0};
int a,b,fat;

for(a=0;a<5; a++){
        for(b=0;b<4; b++){
            printf("\nDigite o elemento da Matriz A Linha %d Coluna %d: ",a,b);
            scanf("%d",&matrizA[a][b]);
        }
    }

for(fat = 1; matrizA[a][b] > 1; matrizA[a][b] = matrizA[a][b]-1){
                fat = fat*matrizA[a][b];
                matrizB[a][b9] = fat;
            }

printf("\nElementos da Matriz B: \n\n");
for(a=0;a<5; a++){
        for(b=0;b<4; b++){
            printf("%d ",matrizB[a][b]);
        }
        printf("\n");
    }
}
