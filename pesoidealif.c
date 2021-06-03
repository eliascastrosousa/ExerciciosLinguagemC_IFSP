#include <locale.h>;

int main(void) {
setlocale(LC_ALL,"portuguese");

float altura;
char sexo;

printf("Digite sua altura: ");
scanf("%f",&altura);
printf("Digite seu sexo, F para Feminino e M para masculino: ");
scanf("%s",&sexo);

toupper(sexo);

if(sexo == "M"){
    printf("O peso ideal é de: %.1f\n",(72.7*altura)-58);
}
else {
    printf("O peso ideal é de: %.1f\n",(62.1*altura)-44.7);
}


}
