*Exibir n�meros de 1 at� o valor definido pelo usu�rio*/
#include <stdio.h>
#include <locale.h>
main(){
  int contador,fim;

 setlocale(LC_ALL,"Portuguese");
  contador = 1;
  printf("Digite o final da contagem: ");
  scanf("%d",&fim);
  while (contador <= fim){
	printf("\t%d\n",contador);
	contador++;
  }
}
