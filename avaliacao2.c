#include <stdio.h>
#include <locale.h>

void imp( int a[][10] ) {
  int i,j;
  for (i=0;i<10;i++){
    for (j=0;j<10;j++){
        printf("%6d",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
int main() {

    setlocale(LC_ALL, "portuguese");

  int vetor[10][10];
  int i,j ;

  for (i=0;i<10;i++) {
    for (j=0;j<10;j++) {
      if (i == j) {
        vetor[i][j] = 3*i*i - 1;
      }
      else if (i <j) {
        vetor[i][j] = 2*i + 7*j - 2 ;
      } else {
          vetor[i][j] = 4*i*i*i + 5*j*j + 1;
      };
    }
  }
  printf("\nIMPRIMINDO A LISTA 10 X 10\n\n");
  imp(&vetor);

  system("pause");
}
