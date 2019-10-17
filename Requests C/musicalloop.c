#include <stdio.h>

int main() {
  while(1){
  int n = 0;
  scanf("%i", &n);
  if(n == 0) break;

  int i = 0;
  int lista[n];
  int num = 0;

  for (i = 0; i < n; i++){
    scanf("%d", &num);
    lista[i] = num;
  }

  int ant = 0;
  int dep = 0;

  int count = 0;
  for(i = 0; i < n; i++){
    //printf("%i\n", lista[i]);
    ant = i-1;
    dep = i+1;
    if (i == 0) ant = n-1;
    else if (i == (n-1)) dep = 0;
    if ((lista[i] > lista[ant] && lista[i] > lista[dep]) || (lista[i] < lista[ant] && lista[i] < lista[dep])) count++;
  }

  printf("%i\n", count);

  }
  return 0;
}
