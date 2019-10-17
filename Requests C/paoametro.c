#include <stdio.h>

int paoametro(int vet[], int i, int f){
  int m = (i + f) / 2;

}




int main(void) {

  int n = 0;
  int k = 0;
  scanf("%i %i", &n, &k);

  int vet[k];

  int i = 1;
  int f = 0;

  for(int j = 0; j != k; j++){
    scanf("%i", &vet[j]);
    if (vet[j] > f) f = vet[j];
  }

  printf("%i %i", i, f);



  return 0;
}
