#include <stdio.h>
#include <locale.h>

/* Criar um vetor de 5 valores. calcule e exibir */

main(){

int v[5], i, soma=0, maior, menor, primo,x, divisor=0;
float media=0;

setlocale(LC_ALL,"portuguese");

for(i=1; i<=5;i++){
    printf("%d - ",i);
    scanf("%d",&v[i]);
    soma+=v[i];
    if (i == 1){
        maior  = v[i];
        menor = v[i];
    }else{
        if(v[i] > maior){
            maior = v[i];
        }
        if (v[i] < menor){
            menor = v[i];
        }
    }
}
    media = soma/5;
    printf("Média: %.2f \nMaior: %d \nMenor: %d\n\n", media, maior, menor);

}
