#include <stdio.h>
int main(void){
  char letra;
  scanf("%c", &letra);
  getchar();
  char string[100];
  gets(string);
  //printf("%s", string);

  int pc = 0;
  int count = 0;
  for (int i=0; string[i] != '\0'; i++){
    //printf("%c\n",string[i]);
    if(string[i] == ' ' && string[i+1] != ' '){
      pc = 1;
    }
    else if (pc == 1){
      if(string[i] == letra){
        count++;
        pc = 0;
      }
    }
    else if(string[0] != ' ') pc = 1;
    else pc = 0;
  }

  printf("%i\n", count);

  return 0;
}
