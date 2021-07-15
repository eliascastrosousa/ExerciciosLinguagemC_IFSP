
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

setlocale(LC_ALL, "");

int matriz[10][10], i, j;

for(i = 1; i <= 10; i++){
   for(j = 1; j <= 10; j++){
        if(i < j){
            matriz[i][j] = ((2 * i) + (7 * j) − 2);
        }else if(i = j){
            matriz[i][j] = (3 * pow(i, 2)) - 1;
        }else{
            matriz[i][j] = (4 * pow(i, 3)) - (5 * pow(j, 2)) + 1;
        }
   }
}
for(i = 1; i <= 10; i++){
   for(j = 1; j <= 10; j++){


   printf("[%d]", matriz[i][j]);

   }

   printf("\n");
}


return 0;
}
