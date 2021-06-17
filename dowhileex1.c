#include <stdio.h>
#include <locale.h>
main(){
    int contador;
    contador = 1;
 setlocale(LC_ALL,"Portuguese");
  do{
    printf("\t%d\n",contador);
    contador++;
} while (contador <= 10);
	printf("fim");

}

