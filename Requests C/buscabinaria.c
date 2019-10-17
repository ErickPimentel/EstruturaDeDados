#include <stdio.h>

int bb(int vet[], int n, int x){
  int i = 0;
  int f = n-1;
  int m = 0;
  int r = -1;

  while(i <= f){
    m = (i+f)/2;
    if(vet[m] == x){
      r = m;
      f = m -1;
    }
    else if(vet[m] > x){
      f=m-1;
    }
    else if(vet[m] < x){
      i = m+1;
    }
  }
  return r;
}

int main(void) {
  int n = 0;
  int q = 0;
  scanf("%i %i", &n, &q);

  int vet[n];
  for(int i = 0; i != n; i++){
    scanf("%i", &vet[i]);
  }

  int x = 0;
  scanf("%i", &x);

 
  printf("%i\n", bb(vet, n, x));
  
  return 0;
}
