/* 3. Faça um programa que leia dez conjuntos de dois valores (Matriz 10 X 2),
o primeiro valor representando o número do aluno e o segundo representando
a sua altura em metros. Encontre o aluno mais baixo e o mais alto.
Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas */

#include <stdio.h>
#include <locale.h>
#define aluno 5
#define altura 1
int main(void){

float matriz[aluno][altura] = {0} ;
int a,b,x,y;

for(a=0; a<aluno; a++){
    printf("ID Aluno: ");
    scanf("%f",&matriz[a][b]);
    for(b=0; b<altura; b++){
            printf("Altura Aluno: ");
            scanf("%f",&matriz[a][b]);
    }
  }
  for(a=0; a<aluno; a++){
    printf("ID Aluno: %.0f\n",matriz[x][b]);
    x++;
    for(b=0; b<altura; b++){
            printf("Altura Aluno: %.2f\n",matriz[a][b]);
    }
}
}
