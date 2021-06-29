/*Para uma turma de 15 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.*/

#include <stdio.h>
#include <locale.h>

main(){

int contador, idade, m_idade, altura, m_altura ,contador_idade ,contador_altura,media_idade,media_altura;

for(contador=1; contador<=15; contador++){
        printf ("\nInsira o idade do aluno %d: ", contador);
        scanf ("%d", &idade);
        printf ("Insira a altura do aluno %d (sem virgulas): ", contador);
        scanf ("%d", &altura);
        if ( idade > 20.0 ) {
            contador_idade++;
            m_idade += idade;
        }
        if ( altura < 1.7 ) {
            contador_altura++;
            m_altura += altura;
        }
}
media_idade = m_idade/contador_idade;
media_altura = m_altura/contador_altura;

printf ("A altura média dos alunos acima de 20 anos é de %d", media_altura);
printf ("\nA idade média dos alunos com menos de 1,70m de altura: %.1f",media_idade);
}
