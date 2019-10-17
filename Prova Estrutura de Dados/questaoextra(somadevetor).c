#include <stdio.h>
#include <string.h>

int soma(int vet[], int n){
  static int s;
  if (n == 0) return 0;
  else{
    s = soma(vet, n-1);
    if (vet[n-1] > 0) s += vet[n-1];
    return s;
  }
}

int main(void) {
  
  int n = 0;
  scanf("%i", &n);
  int vet[n];

  for (int i = 0; i != n; i++){
    scanf("%i", &vet[i]);
  }


  printf("%i", soma(vet, n));

  return 0;
}
