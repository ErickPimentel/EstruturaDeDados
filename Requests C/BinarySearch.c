#include <stdio.h>

int bb(int vet[],int i, int f, int x){
  while(f <= i){
    int m = (i + f) / 2;
    if (vet[m] == x) return m;
    else if(vet[m] > x) f = m - 1;
    else if(vet[m] < x) i = m + 1;
  }
  return -1;
}



int main(void){
  int i = 0;
  int f = 4;
  int vet[50] = {0,1,2,3,4};
  int x = 2;

  printf("%i\n", bb(vet, i, f, x));
}
