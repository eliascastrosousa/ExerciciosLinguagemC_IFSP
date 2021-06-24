#include <stdio.h>
#include <locale.h>

main(){

setlocale(LC_ALL, "portuguese");

int numeros[3][3],linha,coluna;

printf("Digite os valores da matriz: \n");

  //armazenar os valores da matriz
for(linha=0;linha<3;linha++){//linhas da matriz
 	for(coluna=0;coluna<3;coluna++){//colunas da matriz
    	printf("Numero:  ");
    	scanf("%d",&numeros[linha][coluna]);
 	}
   }

//exibir a matriz

printf("\n");
   for(linha=0;linha<3;linha++){
    for(coluna=0;coluna<3;coluna++){
    	printf("%2d\t",numeros[linha][coluna]);
 	}
 	printf("\n");
   }
}
