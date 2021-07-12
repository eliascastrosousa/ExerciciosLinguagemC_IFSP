#include<stdio.h>

main(){

int v1[10],v2[10],i,x;

do{

printf("-------------------------\n");

printf("Insira um valor: \n");

printf("-------------------------\n");

scanf("%d",&v1[i]);

printf("-------------------------\n");

v2[i]=v1[i];

}while(i=0);

for(i=1; i<=9; i++){

printf("-------------------------\n");

printf("Insira um valor: \n");

printf("-------------------------\n");

scanf("%d",&v1[i]);

printf("-------------------------\n");

for(x=0; x<10; x++){

if(v2[x]==v1[i]){

printf("---------------------------------------------\n");

printf("Esse numero ja foi digitado anteriormente.\n");

printf("Por favor, digite outro numero: \n");

printf("---------------------------------------------\n");

scanf("%d",&v1[i]);

printf("---------------------------------------------\n");


}

if(v2[x]==v1[i]){

printf("---------------------------------------------\n");

printf("Esse numero ja foi digitado anteriormente.\n");

printf("Por favor, digite outro numero: \n");

printf("---------------------------------------------\n");

scanf("%d",&v1[i]);

printf("---------------------------------------------\n");

}

v2[x]=v1[i];

}

}

printf("Valores presentes no vetor:\n");

for(i=0; i<10; i++){

printf("%d\n",v1[i]);

}

}
