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
      int contador = 0;


      while(1){
        contador++;

        int igual = 0;
        for (i = 0; n != i; i++){
          if (lista[i] == notamedia) igual++;
        }


        for (i = 0; n != i; i++){
          if (lista[i] < notamedia) lista[i] = lista[i] + 1;
          if (lista[i] > notamedia) lista[i] = lista[i] - 1;
        }


        if (igual == n) break;
      }

      printf("%i\n", contador);
    }
  }
 
  return 0;
}
