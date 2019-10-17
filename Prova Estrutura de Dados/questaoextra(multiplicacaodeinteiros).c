#include <stdio.h>

int multiplicacao(int x, int y){
  static int resultado = 0;
  if (y == 0) return resultado;
  else{
    resultado += x;
    return multiplicacao(x, y-1);
  }
}

int main(void){
  int x,y;

  scanf("%i", &x);
  scanf("%i", &y);
  printf("%i\n", multiplicacao(x, y));
}
