/* Fa�a um algoritmo para ler: a descri��o do produto (nome), a quantidade adquirida e o pre�o unit�rio.
Calcular e escrever o total (total = quantidade adquirida * pre�o unit�rio),
o desconto e o total a pagar (total a pagar = total - desconto), sabendo-se que:
Se quantidade <= 5 o desconto ser� de 2%
Se quantidade > 5 e quantidade <=10 o desconto ser� de 3%
Se quantidade > 10 o desconto ser� de 5% */

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "portuguese");
char prod;
float price, total, discount;
int amount ;

printf("\nDigite o nome do produto: ");
scanf("%c", &prod);

printf("\nDigite o valor: ");
scanf("%f", &price);

printf("\nDigite a quantidade: ");
scanf("%d", &amount);

total = amount*price;

if(amount <= 5){
        discount = total-(total*0.02);
        printf("Total a pagar: %.2f ", discount);

}else if(amount <= 10){
        discount = total-(total*0.03);
        printf("Total a pagar: %.2f ", discount);

}else if (amount > 10){
        discount = total-(total*0.05);
        printf("Total a pagar: %.2f ", discount);
}



}
