/* Faça um programa para ler uma matriz A de duas dimensões com 5 linhas e 4 colunas.
Construir uma matriz B de mesma dimensão, onde cada elemento da matriz B deverá ser o fatorial de
cada elemento correspondente da matriz A . Apresentar ao final as matrizes A e B. */

#include <stdio.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"portuguese");

int matrizA[5][4]={0};
int matrizB[5][4]={0};
int fatorial[5][4]={0};
int a,b;

for(a=0;a<5; a++){
        for(b=0;b<4; b++){
            printf("\nDigite o elemento da Matriz A Linha %d Coluna %d: ",a,b);
            scanf("%d",&matrizA[a][b]);
            matrizB[a][b] = matrizA[a][b];
            fatorial[5][4]= matrizA[a][b];
            while(fatorial[a][b]>1){
                matrizB[a][b] = matrizB[a][b]*fatorial[a][b]--;
            }
        }
    }

    // for para criar

printf("\nElementos da Matriz B: \n\n");
for(a=0;a<5; a++){
        for(b=0;b<4; b++){
            printf("%d ",matrizB[a][b]);
        }
        printf("\n");
    }
}
