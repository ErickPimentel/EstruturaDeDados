#include <stdio.h>
void negativo_positivo(int vet[], int *n, int *p){

  for(int i = 0; i < 20; i++){
    if (vet[i] < 0){
      (*n)++;
    }
    else {
      (*p)++;
    }
  }
}



int main(){
  int v[20];
  int neg = 0, pos = 0;
  for (int i = 0; i < 20; i++){
    scanf("%d", &v[i]);
  }
  negativo_positivo(v, &neg, &pos);
  printf("Quantidade de negativos: %i\n", neg);
  printf("Quantidade de positivos: %i\n", pos);



  return 0;
}
