#include <stdio.h>

int main(void) {
  int n = 0;
  while(scanf("%i", &n) != EOF){

    int i = 0;
    int lista[n];
    for (i = 0; n != i; i++){
      scanf("%i", &lista[i]);
    }
    
    int somanotas = 0;
    for (i = 0; n != i; i++){
      somanotas += lista[i];
    }


    if (somanotas % n != 0) printf("-1\n");
    else {
      int notamedia = 0;
      notamedia = somanotas / n;
      int maior = 0;

      for(i = 0; n != i; i++){
        if (lista[i] < notamedia) maior = notamedia - lista[i];
        if (lista[i] > notamedia) maior = lista[i] - notamedia;
      }

      printf("%i\n", maior+1);
    
    }
  }
 
  return 0;
}
