/* Ler 20 elementos (valores reais) para temperaturas em graus Celsius em uma matriz A de uma dimensão do tipo vetor.
O programa deverá apresentar a menor, a maior e a média das temperaturas lidas. */


#include <stdio.h>
#include <locale.h>
#define TAM 5

int c;
float media,maior,menor,soma,vetor[TAM];

main(){
setlocale(LC_ALL,"portuguese");
for(c=1;c<=TAM;c++){
    printf("Digite a altura %d: ",c);
    scanf("%f",&vetor[c]);
    soma+=vetor[c];
    menor = vetor[c];

    if(vetor[c]>maior){
        maior = vetor[c];
    }
}

printf("Maior: %.0f\n",maior);

}
