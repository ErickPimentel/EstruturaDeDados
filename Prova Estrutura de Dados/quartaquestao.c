#include <stdio.h>
#include <string.h>


int palindromo(char str[], int i,int f){
  if ((i + 1 == f) && (str[i] ==  str[f])) return 1;
  else if (i == f) return 1;
  else{
    if (str[i] == str[f]){
      return palindromo(str, i+1, f-1);
    }
    else{
      return 0;
    }
  }
}


int main(){

  char str[] = "subinoonibus";
  printf("%i",palindromo(str, 0, strlen(str)-1));

  return 0;
}
