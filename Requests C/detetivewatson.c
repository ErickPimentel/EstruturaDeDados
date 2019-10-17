#include <stdio.h>

int main(void) {
  int n = 0;
  while (1){
    scanf("%i", &n);
    if (n == 0) break;

    int i = 0;
    int lista[10000];
    int num = 0;

    //zera a lista lista
    for (i = 0; 10000 != i; i++){
      lista[i] = 0;
    }

    //bota o num no indice correspondente a num
    int hehe[n];
    for (i = 0; n != i; i++){
      scanf("%i", &num);
      lista[num] = num;
      hehe[i] = num;
    }


    int contador = 0;
    int teste[n];
    for (i = 0; 10000 != i; i++){
      if (lista[i] != 0){
        //printf("%i\n", lista[i]);
        teste[contador] = lista[i];
        contador++;
      }
    }

    int armazena = 0;
    for (i = 0; n != i; i++) armazena = teste[i-1];

    //printf("%i\n",armazena);

    for(i = 0; n != i; i++){
      if (hehe[i] == armazena) printf("%i\n", i+1);
    }




    }
  return 0;
}
