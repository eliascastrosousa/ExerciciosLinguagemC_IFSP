/* Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual se perguntou para cada aluno,
o número de vezes que utilizou o restaurante da universidade no último mês. Construa um algoritmo que determine:
a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;
b) O percentual de alunos que utilizaram entre 10 e 15 vezes;
c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes.
Ex.: 2, 3, 11, 12, 21, 22, 23 = a) 28%;     b) 28%;     c) 42% */

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "portuguese");

int count=1, finish, quantity;
printf("SEJA BEM VINDO \n\n");
while(quantity != int){
    printf("\n\nAluno %d, Digite quantas vezes você utilizou o Restaurante no ultimo mês:\nOu digite 0 para encerrar: ", count);
    scanf("%f", &quantity);
    count++;
}


}
