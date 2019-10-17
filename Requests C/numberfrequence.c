#include <stdio.h>

int main(void) {
  int n = 0;
  scanf("%i", &n);

  int i = 0;
  int num = 0;
  int lista[2001];

  for (i = 0; 2001 != i; i++){
    lista[i] = 0;
  }


  for (i = 0; n != i; i++){
    scanf("%i",&num);
    lista[num]++;
  }

  for (i = 0; 2001 != i; i++){
    if (lista[i] != 0)
    printf("%i aparece %i vez(es)\n",i ,lista[i]);
  }
  return 0;
}
