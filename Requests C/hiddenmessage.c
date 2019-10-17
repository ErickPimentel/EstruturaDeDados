#include <stdio.h>

int main(void) {
  int n = 0;
  scanf("%i", &n);
  getchar();
  int j = 0;

  for (j = 0; j != n; j++){
    char ent[51];
    
    gets(ent);
    int pc = 1;
    int i = 0;
    for (i = 0; ent[i] != '\0'; i++){
      if (ent[i] == ' '){
        pc = 1;
      }
      else if (pc == 1){
        printf("%c", ent[i]);
        pc = 0;
      }
    }
    printf("\n");

    }

  return 0;
}
