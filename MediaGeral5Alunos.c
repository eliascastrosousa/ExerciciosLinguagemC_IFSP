#include <stdio.h>
#include <locale.h>

/* Fa�a um programa que calcula a m�dia geral de cinco alunos, recebendo a m�dia
de cada um dos alunos. No final exibir a m�dia geral da turma. */

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
printf("a m�dia geral �: %f" ,mediageral);

}
