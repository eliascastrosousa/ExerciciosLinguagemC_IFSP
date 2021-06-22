#include <stdio.h>
#include <locale.h>

/* Faça um programa que calcula a média geral de cinco alunos, recebendo a média
de cada um dos alunos. No final exibir a média geral da turma. */

main() {
setlocale(LC_ALL, "portuguese");

int cont=1;
float mediaaluno, mediageral;

while(cont <= 5){
    printf("Digite a nota do aluno %d: ", cont);
    scanf("%f", &mediaaluno);
    cont++;
    mediageral += mediaaluno;
}
mediageral = mediageral/5;
printf("a média geral é: %f" ,mediageral);

}
