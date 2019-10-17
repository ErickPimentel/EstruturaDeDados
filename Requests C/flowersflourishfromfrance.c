#include <stdio.h>

int main(void) {

  while (1){
    char ent[1000];
    gets(ent);
    if (ent[0] == '*') break;

    char prim;
    prim = ent[0];
    if (prim < 'a') prim = prim + 32;
    
    int pc = 1;
    int i = 0;
    int countigual = 0;
    int countfora = 0;
    for (i = 0; ent[i] != '\0'; i++){
      if (ent[i] == ' '){
        pc = 1;
      }
      else if (pc == 1){

        if (ent[i] < 'a'){
          ent[i] = ent[i] + 32;
        }

        countfora++;

        if (ent[i] == prim) countigual++;
      
        pc = 0;

      }
    }
    //printf(" %i %i", countfora, countigual);
    if (countfora == countigual) printf("Y\n");
    else printf("N\n");
  }
    

  return 0;
}
