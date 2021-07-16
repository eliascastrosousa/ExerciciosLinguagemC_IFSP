/* Ler 20 elementos (valores reais) para temperaturas em graus Celsius em uma matriz A de uma dimensão do tipo vetor.
O programa deverá apresentar a menor, a maior e a média das temperaturas lidas. */


#include <stdio.h>
#include <locale.h>
#define TAM 1
int main(){

setlocale(LC_ALL,"portuguese");

float matrizA[TAM]={0};

for(int c=0; c<TAM; c++){
        printf("Digite o Valor da matrizA[%.0f]: ", c);
        scanf("%f", &matrizA[c]);
    }
printf("\n");
printf("Resultado: \n");
for(int c=0; c<TAM; c++){
        printf("%f", matrizA[c]);
        printf("\n");
    }
}

