#include <stdio.h>

int main(void) {

  
  int n = 0;
  int contador = 0;
  while(1){
    contador++;
    scanf("%i", &n);
    if (n == 0) break;

    int lista[1000][2];
    int i = 0;

    int id = 0;
    int nota = 0;

    for (i = 0; 1000 != i; i++){
      lista[i][0] = 0;
      lista[i][1] = 0;
    }

    for (i = 0; n != i; i++){
      scanf("%i %i", &id , &nota);
      lista[i][0] = id;
      lista[i][1] = nota;
    }

    int maiornota = 0;
    int armazenaid = 0;
    for (i = 0; n != i; i++){
      //printf("%i %i\n", lista[i][0], lista[i][1]);
      if (lista[i][1] >= maiornota){
        maiornota = lista[i][1];
        armazenaid = lista[i][0];
      }
    }
    //printf("%i\n", maiornota);

    
    printf("Turma %i\n", contador);
    for(i = 0; n != i; i++){
      if ((lista[i][1] == maiornota) && (lista[i][0] != armazenaid)){
        printf("%i ", lista[i][0]);
        //printf(" i%i id%i ", i, indice);
      }
      if ((lista[i][1] == maiornota) && (lista[i][0] == armazenaid)){
        printf("%i \n\n", lista[i][0]);
      }
    }
  
  }
return 0;
}
