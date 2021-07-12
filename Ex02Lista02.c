#include <stdio.h>
#include <locale.h>
#define TAM 5

int vetor[TAM],c;
float media,maior=0,menor=0,soma;

main(){
setlocale(LC_ALL,"portuguese");
for(c=1;c<=TAM;c++){
    printf("Digite o Valor para o numero %d: ",c);
    scanf("%d",&vetor[c]);
    soma+=vetor[c];
    menor = vetor[c];

    if(vetor[c]>maior){
        maior = vetor[c];
    }
}
media = soma/TAM;
printf("Total: %.2f\nMédia: %.2f\nMaior: %.0f\n",soma, media, maior);

}

