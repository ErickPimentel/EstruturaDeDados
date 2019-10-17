#include <stdio.h>
#include <string.h>
int main(void) {
  int c = 0;
  scanf("%i\n", &c);

  char tipo;
  scanf("%c", &tipo);

  //printf("%i %c", c , tipo);
  
  
  int j,i;
  float matriz[12][12];
  for (j = 0; j != 12; j++){
    for (i = 0; i != 12; i++){
    matriz[j][i] = 0;
    }
  }

  for (j = 0; j != 12; j++){
    for (i = 0; i != 12; i++){
    scanf("%f", &matriz[j][i]);
    }
  }

  //for (j = 0; j != 12; j++){
  //  for (i = 0; i != 12; i++){
  //    if (i == 11) printf("%.1f\n", matriz[j][i]);
  //    else printf("%.1f ", matriz[j][i]);
  //  }
  //}
  
  float soma = 0;
  if (tipo == 'S'){
    for (i = 0; i != 12; i++){
      soma += matriz[i][c];
      //printf("%.1f\n",matriz[i][c]);
    }
    printf("soma = %.1f\n", soma);
  }


  float somamedia = 0;
  float media = 0;
  if (tipo == 'M'){
    for (i = 0; i != 12; i++){
      somamedia += matriz[i][c];
      //printf("%.1f\n",matriz[i][c]);
    }
  
    media = somamedia / 12.0;
    printf("%.1f\n", media);

  }

  


  return 0;
}
