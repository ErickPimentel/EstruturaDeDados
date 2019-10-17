#include <stdio.h>
#include <string.h>

int main(void) {

  int n = 0;
  int i = 0;

  int m = 0;
  char l[2];

  int lista[60][2];

  while(scanf("%i", &n) != EOF){

  for (i = 0; 60 != i; i++){
    lista[i][0] = 0;
    lista[i][1] = 0;
  }




  for(i = 0; n != i; i++){
    scanf("%i %s", &m , l);
    //printf("%i %s \n", m, l);
    
    if (strcmp(l, "E")==0){
      lista[m][0]++;
      //printf("%i\n", lista[m][0]);
    }

    if (strcmp(l, "D")==0){
      lista[m][1]++;
      //printf("%i\n", lista[m][1]);
    }

  }

  int resul = 0;
  for(i = 0; 60 != i; i++){
    //printf("%i %i \n", lista[i][0], lista[i][1]);
    if(lista[i][0] > lista[i][1]) resul += lista[i][1];
    if(lista[i][1] > lista[i][0]) resul += lista[i][0];
    if((lista[i][0] == lista[i][1]) && (lista[i][0] != 0) && (lista[i][1] != 0)) resul += lista[i][0];
  }

  printf("%i\n", resul);
  
  }


  return 0;
}
