#include <stdio.h>

int invert(int num){
  int teste = 0;
  if (num == 0) return num;
  else{
    teste = num % 10;
    printf("%i", teste);
    num = num / 10;
    return invert(num);
  } 
}

int main(){
  int num = 0;
  scanf("%i", &num);
  invert(num);
}
