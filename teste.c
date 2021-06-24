#include <stdio.h>
#include <stdlib.h>
int main()
{
	int NUMEROS[10],  INDICE;
    	printf("\nDigite os números do vetor\n");
    	for(INDICE=0; INDICE < 10; INDICE++)
    	{
        	printf("Entre com o numero %d: ", INDICE+1);
        	scanf("%d", &NUMEROS[INDICE]);
    	}
    	system("cls");
    	printf("Exibe os números do vetor");
   	 for(INDICE=0; INDICE < 10; INDICE++)
        	printf("Numero %d = %d\n", INDICE+1, NUMEROS[INDICE]);

}
