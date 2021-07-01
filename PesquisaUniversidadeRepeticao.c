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
float a_avg, b_avg, c_avg,quantity, count=1,classe_a=0, classe_b=0, classe_c=0;
char tecla;
while(count<=10){
    printf("\n\nAluno %.0f, Digite quantas vezes você utilizou o Restaurante no ultimo mês: ", count);
    scanf("%f",&quantity);
    count++;
    if(quantity > 0 && quantity <=10 ){
        classe_a++;
    }else if (quantity > 10 && quantity <=15){
        classe_b++;
    }else if (quantity > 15){
        classe_c++;
    }else{
        printf("valor invalido");
    }
}
a_avg = classe_a/count*100;
b_avg = classe_b/count*100;
c_avg = classe_c/count*100;
printf("\nCATEGORA [A]: %.2f%%\nCATEGORA [B]: %.2f%%\nCATEGORA [C]: %.2f%%\n", a_avg , b_avg , c_avg );
}
