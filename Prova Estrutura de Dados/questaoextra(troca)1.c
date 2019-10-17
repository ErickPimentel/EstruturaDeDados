#include <stdio.h>

void troca(double *x, double *y){
  double ancap = 0;
  ancap = *x;
  *x = *y;
  *y = ancap;
}




int main(void) {
  double x,y;
  scanf("%lf", &x);
  scanf("%lf", &y);
  troca(&x, &y);
  printf("%lf %lf", x,y);

  return 0;
}
