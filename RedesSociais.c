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
        printf("Opção escolhida: %d, Instagram \n ", opcao);
        inst++;
        votos++;
    break;
    case 2:
        printf("Opção escolhida: %d, Twitter \n", opcao);
        twi++;
        votos++;
    break;
    case 3:
        printf("Opção escolhida: %d, Facebook \n", opcao);
        face++;
        votos++;
    break;
    case 4:
        printf("Opção escolhida: %d, Outros \n", opcao);
        outros++;
        votos++;
    break;
    case 0:
        printf("\n\n Operação Encerrada! \n\n");
    break;
    default:
        printf("\n\n Numero invalido! Tente novamente! \n\n");

    } //fim switch

} //fim while
printf("=================  Resultado  ==================== \n");
printf("Rede Social........... N° de alunos ...........%% \n");
printf("Instagram.............. %.2f .............. %.2f \n", inst, ((inst/votos)*100));
printf("Twitter................ %.2f .............. %.2f \n", twi, ((twi/votos)*100));
printf("Facebook............... %.2f .............. %.2f \n", face, ((face/votos)*100));
printf("Outros................. %.2f .............. %.2f \n", outros, ((outros/votos)*100));

printf("\n Resultado:  \n Instagram: %.2f % \n Twitter: %.2f  \n Facebook: %.2f \n Outros: %f % \n Total de votos: %d.", ((inst/votos)*100),((twi/votos)*100),((face/votos)*100),((outros/votos)*100), votos);
} //fim bloco main

