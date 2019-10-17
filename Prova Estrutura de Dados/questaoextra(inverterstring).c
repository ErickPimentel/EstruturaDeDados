#include <stdio.h>
#include <string.h>

int len(char str[]){
  int armazena = 0; 
  for(int i = 0; str[i] !='\0'; i++){
    armazena = i;
  }
  return armazena+1;
}

void invert(char str[], int f){
  int i = 0;
  int j = 0;
  for (i = f,j = 0; i >= 0; i--, j++){
    printf("%c", str[i]);
  }
}


int main(void) {
  char str[50];
  scanf("%s", str);
  int f = len(str);

  invert(str, f);



  return 0;
}
