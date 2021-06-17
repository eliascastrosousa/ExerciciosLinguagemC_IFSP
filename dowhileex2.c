#include <stdio.h>
#include <locale.h>
main(){
  float valorDigitado, soma;

  setlocale(LC_ALL,"Portuguese");
  soma = 0;
  printf("Digite um valor: ");
  scanf("%f",&valorDigitado);

  do{
	soma += valorDigitado; //soma = soma + valorDigitado
	printf("Digite outro valor para somar ou digite ZERO para mostrar o resultado:  ");
	scanf("%f",&valorDigitado);
  }while (valorDigitado != 0);
  printf("Resultado = %.2f\n\n",soma);
}
