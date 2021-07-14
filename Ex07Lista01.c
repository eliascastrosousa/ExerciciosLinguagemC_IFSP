/* Exercício Fácil de Repetição: Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000 */
main(){
int n;
setlocale(LC_ALL,"portuguese");
for(n=1;n<=1000;n++){
    if(n%7==0){
        printf("\n %d", n);
    }
}
}

