/* Faça um programa para ler duas matrizes A e B, cada uma de duas dimensões com 5
linhas e 3 colunas. Construir uma matriz C de mesma dimensão, que é formada pela
soma dos elementos da matriz A com os elementos da matriz B. Apresentar a matriz C */

#include <stdio.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"portuguese");

int matrizA[5][3]={0};
int matrizB[5][3]={0};
int matrizC[5][3]={0};
int a,b;


for(a=0;a<5; a++){
        for(b=0;b<=2; b++){
            printf("\nDigite o elemento da Matriz A Linha %d Coluna %d: ",a,b);
            scanf("%d",&matrizA[a][b]);
        }
    }
for(a=0;a<5; a++){
        for(b=0;b<=2; b++){
            printf("\nDigite o elemento da Matriz B Linha %d Coluna %d: ",a,b);
            scanf("%d",&matrizB[a][b]);
        }
    }
printf("Elementos da Matriz C: \n");
for(a=0;a<5; a++){
        for(b=0;b<=2; b++){
            matrizC[a][b] = (matrizA[a][b]+matrizB[a][b]);
            printf("%d ",matrizC[a][b]);

        }
        printf("\n");
    }



/*
    for(a=0;a<5; a++){
        printf("\nDigite o elemento da Matriz A Linha %d Coluna %d: ",a,b);
        scanf("%d",&matrizA[a][b]);

        for(b=0;b<=2; b++){
            printf("\nDigite o elemento da Matriz A Linha %d Coluna %d: ",a,b);
            scanf("%d",&matrizA[a][b]);
        }
    }
    for(a=0;a<5; a++){
        printf("\nDigite o elemento da Matriz B Linha %d Coluna %d: ",a,b);
        scanf("%d",&matrizB[a][b]);

        for(b=0;b<=2; b++){
            printf("\nDigite o elemento da Matriz B Linha %d Coluna %d: ",a,b);
            scanf("%d",&matrizB[a][b]);
    }
   }*/
 }
