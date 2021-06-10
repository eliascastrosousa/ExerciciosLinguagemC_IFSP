#include <stdio.h>
#include <locale.h>

main() {
setlocale(LC_ALL,"Portuguese");

float nota1, nota2, media;

printf("Digite a primeira nota: ");
scanf("%f",&nota1);

printf("Digite a segunda nota: ");
scanf("%f",&nota2);

media = ((nota1 + nota2)/2);

if (media < 6.0) {
    printf("media inferior a media minima 6 ");
}

else if (media == 6.0 ){
    printf("Média igual a 6!");
}

else {
    printf("Média maior que 6");
}

}
