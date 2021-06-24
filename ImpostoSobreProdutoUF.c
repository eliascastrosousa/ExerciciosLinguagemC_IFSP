/* Programa para calcular o imposto sobre um produto para cada estado
 */

# include <stdio.h>
# include <locale.h>
int main (){
 setlocale(LC_ALL,"Portuguese");

 float valor;
 double custo;
 int opcao;

 printf("Digite o valor do produto R$: "); // Entrada do valor
 scanf("%f", &valor);

 printf("Digite o estado de entrega: \n 1 - Minas Gerais\n 2 - São Paulo\n 3 - Rio de janeiro\n 4 - Mato grosso\n" ); /*Seleção de estados*/
 printf("Digite: ");
 scanf("%d", &opcao);

 if(opcao == 1){ //minas gerais
    custo = ((valor*0.07)+valor);
    printf("O valor do imposto com o produto para o estado de Minas gerais é R$ %.2f", custo);
 }
 else if(opcao == 2){ // São Paulo
    custo = ((valor*0.12)+valor);
    printf("O valor do imposto com o produto para o estado de São Paulo é R$%.2f", custo);
 }
 else if(opcao == 3){ // Rio de Janeiro
    custo = ((valor*0.15)+valor);
    printf("O valor do imposto deste produto, no estado do Rio de Janeiro é R$%.2f",custo);
 }
 else if(opcao == 4){ // Mato Grosso do Sul
    custo = ((valor*0.08)+valor);
    printf("O valor do imposto deste produto, no estado de Mato Grosso do Sul é R$%.2f", custo);
 }
 else if(opcao == 0 || opcao >4){
    printf("Erro de estado");
 }
 return 0;
}
