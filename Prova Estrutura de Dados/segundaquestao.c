#include <stdio.h>

int main(void){
  int vet1[100], vet2[100];
  int i;
  for (i = 0; i < 100; i++){
    scanf("%i", &vet1[i]);
    vet2[i] = vet1[i];
  }


  int count = 0;
  for (i = 0; i < 100; i++){
    if (vet2[i] < 0){
      vet2[i] *= -1;
      count++;
    }
  }
  for (i = 0; i < 100; i++){
    printf("%i %i\n", vet1[i], vet2[i]);
  }
  printf("Contador: %i", count);




  return 0;
}
