#include <stdio.h>
#include <math.h>

double fatorial(int n){
  if (n == 1) return 1;
  else return n*fatorial(n-1);
}


double taylor(double angle){
  int times = 6;
  double val = 0;
  
  for(int n = 0; n < times; n++){
    val += (pow(-1, n) / fatorial(2*n + 1)) * pow(angle, 2*n + 1);
  }
  return val;
}



int main(void) {
  double angle = 0;
  scanf("%lf", &angle);
  angle = angle * M_PI / 180;
  printf("%lf\n", taylor(angle));
  return 0;
}
