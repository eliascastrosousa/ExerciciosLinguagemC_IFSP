#include <stdio.h>
#include <locale.h>
#define TAM 3

main(){

setlocale(LC_ALL, "portuguese");

float vetor[TAM],media;

printf("=======SEJA BEM VINDO=======");


        printf("\nDigite a Nota da primeira Prova: ");
        scanf("%f", &vetor[0]);
        if(vetor[0] == -1){
            printf("Programa encerrado!");
        }else {
            printf("\nDigite a Nota da segunda Prova: ");
            scanf("%f", &vetor[1]);

            vetor[2]= (vetor[0]+vetor[1]);
            vetor[2]= vetor[2]/2;

            printf("\nPRIMEIRA NOTA: %.0f, SEGUNDA NOTA: %.0f \nMédia Final: %.1f",vetor[0],vetor[1], vetor[2]);

            if(vetor[2]>=6){
                printf("\n\nAPROVADO!! PARABÉNS\n");
            }else {
                printf("\n\nREPROVADO!\n");
            }

        }
}
