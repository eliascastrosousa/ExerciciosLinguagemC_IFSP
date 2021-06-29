/* Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o preço unitário.
Calcular e escrever o total (total = quantidade adquirida * preço unitário),
o desconto e o total a pagar (total a pagar = total - desconto), sabendo-se que:
Se quantidade <= 5 o desconto será de 2%
Se quantidade > 5 e quantidade <=10 o desconto será de 3%
Se quantidade > 10 o desconto será de 5% */

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
