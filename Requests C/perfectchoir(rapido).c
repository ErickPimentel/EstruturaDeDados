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
      int res = 1;

      for(i = 0; n != i; i++){
        if (lista[i] < notamedia) res += notamedia - lista[i];
      }
      //printf("%i\n", contador);
      printf("%i\n", res);
    }
  }
 
  return 0;
}
