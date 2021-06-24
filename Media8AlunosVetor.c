#include <stdio.h>
#include <locale.h>

main(){
  	int count; //contagem
  	float md[8], md_geral, soma=0; //md= vetor de 8 posições

  	setlocale(LC_ALL,"Portuguese");

  	printf("\nDigite a média dos alunos\n");
  	for(count=0; count < 8; count++){
    	   printf("Aluno %d: ", count + 1);
    	   scanf("%f",&md[count]);
    	   soma += md[count];
  	}

  	md_geral = soma /8;
  	printf("Média Geral dos alunos = %.2f\n\n",md_geral);
   }
