#include <stdio.h>
#include <locale.h>

main(){

int opc, count;
float num1, num2, resultado;

setlocale(LC_ALL ,"portuguese");


while(count != 9 ){
printf("\n\n\n================== SEJA BEM VINDA KARINA =================== \n\n");

printf("Digite Qual o tipo de Conta que você Deseja fazer!\n\n");
printf("[1] SOMA \n[2] SUBTRAÇÃO \n[3] MULTIPLICAÇÃO \n[4] DIVISÃO \n[5] PORCENTAGEM \n[6] VARIAÇÃO PORCENTUAL \n[7] ACRESCENTAR PORCENTAGEM \n[8] DESCONTO DE PORCENTAGEM \n[0] ENCERRAR \n");
printf("OPÇÃO: ");
scanf("%d", &opc);
printf("\n------------------------------------------------------------");
    switch (opc){
        case 0:
            printf("\n\nENCERRAR...\n\n");
            count=9;
        break;

        case 1:
            printf("\n\nSELECIONADO: SOMA\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1+num2;
            printf("RESULTADO: %.0f \n\n", resultado);
        break;

        case 2:
            printf("\n\nSELECIONADO: SUBTRAÇÃO\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1-num2;
            printf("RESULTADO: %.0f \n\n", resultado);
        break;

        case 3:
            printf("\n\nSELECIONADO: MULTIPLICAÇÃO\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1*num2;
            printf("RESULTADO: %.0f \n\n", resultado);
        break;

        case 4:
            printf("\n\nSELECIONADO: DIVISÃO\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1/num2;
            printf("RESULTADO: %.2f \n\n", resultado);
        break;

        case 5:
            printf("\n\nSELECIONADO: PORCENTUAL DO TOTAL\n(DIGITE O PRIMEIRO VALOR PARA SABER QUANTOS %% ELE É DO SEGUNDO VALOR)\n");
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = (num1/num2)*100;
            printf("RESULTADO: O NUMERO %.2f é %.2f%% de %.2f. \n\n",num1, resultado, num2);
        break;

        case 6:
            printf("\n\nSELECIONADO: VARIAÇÃO PORCENTUAL\n");
            printf("Digite os valores para saber se houve um crescimento ou um \ndecrescimento e de quantos %% foi.\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = ((num2-num1)/num1)*100;

            if (resultado <0){
                printf("RESULTADO: O Número %.2f para %.2f teve uma queda de %.2f%%. \n\n",num1, num2, resultado);
            }else {
                printf("RESULTADO: O Número %.2f para %.2f teve um crescimento de %.2f%%. \n\n",num1, num2, resultado);
            }
        break;

        case 7:
            printf("\n\nSELECIONADO: ACRESCENTAR PORCENTAGEM \n\n");
            printf("Digite um valor: ");
            scanf("%f", &num1);
            printf("Digite a porcentagem que deseja acrescentar em cima: ");
            scanf("%f", &num2);
            resultado = (num1*num2)/100;
            printf("RESULTADO: O Valor de R$%.2f com acréscimo de %.3f%% fica: R$%.3f. \n\n",num1, num2, num1+resultado);
        break;

        case 8:
            printf("\n\nSELECIONADO: DESCONTO DE PORCENTAGEM \nDigite um valor e em seguida o desconto que deseja aplicar\n\n");
            printf("Digite um valor: ");
            scanf("%f", &num1);
            printf("Digite a porcentagem que deseja gerar como desconto: ");
            scanf("%f", &num2);
            resultado = (num1*num2)/100;
            printf("RESULTADO: O Valor de R$%.2f com desconto de %.3f%% fica: R$%.3f. \n\n",num1, num2, num1-resultado);
        break;

        default:
            printf("\n\n Número inválido! Tente novamente! \n\n");
}
    system("PAUSE");
}
}
