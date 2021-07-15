/* 3. Faça um programa que leia dez conjuntos de dois valores (Matriz 10 X 2),
o primeiro valor representando o número do aluno e o segundo representando
a sua altura em metros. Encontre o aluno mais baixo e o mais alto.
Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas */

#include <stdio.h>
#include <locale.h>

int main(void){

const int obj_alunos = 10;
const int obj_altura = 2;

int matriz[obj_alunos][obj_altura] = {0};

printf("Digite a altura do numero %d: ");

for(int aluno=0; aluno < obj_alunos; aluno++){
    for(int aluno_altura=0; aluno_altura < obj_altura; aluno_altura++){
        scanf("%d",&matriz[obj_alunos][obj_altura]);
    }
}

}











/*
main()(

int matriz[10][2];

for(int l=0;l<10;l++){
        for(int c=0;c<2;c++){
            printf("Digite o numero do aluno: ");
            scanf("%i",&matriz[l][]);
            printf("\nDigite a altura do aluno(sem virgulas): ");
            scanf("%i",&matriz[][c]);
        }
    }
for(l=0;l<10;l++){
        for(c=0;c<2;c++){
            printf("Matriz: \n\n %d \n",matriz[l][c]);
        }
}
)*/








/* main(void){

//          L  C col  0-1
int matriz[10][2] = {{1,2}, //0
                     {3,4}, //1
                     {5,6}, //2
                     {7,8}, //3
                     {9,10}, //4
                     {11,12}, //5
                     {13,14}, //6
                     {15,16}, //7
                     {17,18}, //8
                     {19,20}}; //9


for(int l=0;l<10;l++){
        for(int c=0;c<2;c++){
            printf("Matriz: \n\n %d \n",matriz[l][c]);
        }
    }
}  */
