#include <stdio.h>
#include <locale.h>

main() {
setlocale(LC_ALL, "portuguese");

int opcao, votos=0;
float inst=0, twi=0, face=0, outros=0 ;


while (opcao != 0){

    printf("\n\n Digite a Rede social que o aluno utiliza: \n 1. Instagram \n 2. Twitter \n 3. Facebook \n 4. Outros \n Para Encerrar digite 0. ");
    printf("\n Digite: ");
    scanf("%d", &opcao);

    switch (opcao){

    case 1:
        printf("Op??o escolhida: %d, Instagram \n ", opcao);
        inst++;
        votos++;
    break;
    case 2:
        printf("Op??o escolhida: %d, Twitter \n", opcao);
        twi++;
        votos++;
    break;
    case 3:
        printf("Op??o escolhida: %d, Facebook \n", opcao);
        face++;
        votos++;
    break;
    case 4:
        printf("Op??o escolhida: %d, Outros \n", opcao);
        outros++;
        votos++;
    break;
    case 0:
        printf("\n\n Opera??o Encerrada! \n\n");
    break;
    default:
        printf("\n\n Numero invalido! Tente novamente! \n\n");

    } //fim switch
} //fim while

system("cls");

printf("\n\nRede Social         N? de alunos                %%  \n");
printf("-------------------------------------------------------\n");
printf("Instagram               %.0f                    %.1f  \n", inst, ((inst/votos)*100));
printf("Twitter                 %.0f                    %.1f  \n", twi, ((twi/votos)*100));
printf("Facebook                %.0f                    %.1f  \n", face, ((face/votos)*100));
printf("Outros                  %.0f                    %.1f  \n", outros, ((outros/votos)*100));
printf("-------------------------------------------------------\n");
printf("Totais                                         100%%  \n");

} //fim bloco main

