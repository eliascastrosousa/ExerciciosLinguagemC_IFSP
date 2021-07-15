/* 3. Faça um programa que leia dez conjuntos de dois valores (Matriz 10 X 2),
o primeiro valor representando o número do aluno e o segundo representando
a sua altura em metros. Encontre o aluno mais baixo e o mais alto.
Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas */

#include <stdio.h>
#include <locale.h>

int matriz[10][2] = {0};

const int obj_alunos = 10;
const int obj_altura = 2;

int main(void){
setlocale(LC_ALL, "portuguese");



for(int aluno=0; aluno < obj_alunos; aluno++){

    for(int aluno_altura=0; aluno_altura < obj_altura; aluno_altura++){
        printf("\nDigite o numero do Aluno: ",aluno);
        scanf("%d",&matriz[obj_alunos][obj_altura]);
        printf("\nDigite a altura do numero %d: ",aluno);
        scanf("%d",&matriz[obj_alunos][obj_altura]);
    }
}

}
