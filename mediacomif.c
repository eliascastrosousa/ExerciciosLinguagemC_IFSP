int main() {
float n1, n2,n3,n4, media;

printf("Digite a primeira nota: \n");
scanf("%f",&n1);
printf("Digite a segunda nota : \n");
scanf("%f",&n2);
printf("Digite a terceira nota : \n");
scanf("%f",&n3);
printf("Digite a quarta nota : \n");
scanf("%f",&n4);



media = (n1+n2+n3+n4)/4;
printf("A media dos valores e igual a: %.1f\n",media);


if(media >= 7)
{
    printf("Voce passou!!! \n");
}
else {
    printf("Voce foi reprovado!! :( \n");
};
return(0);
}
