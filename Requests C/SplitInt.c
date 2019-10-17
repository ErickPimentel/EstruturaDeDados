#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int verifyListInt(const char *str){
  int qtdnum = 0;
  for (int i = 0; str[i] != '\0'; i++){
    if ((str[i] < '0' || str[i] > '9') && str[i] != ' ') return 0;
    if ((str[i] >= '0' && str[i] <= '9') && (str[i+1] == ' ' || str[i+1] == '\0')) qtdnum++;
  }
  return qtdnum;
}

int *splitInt(const char *str, int *tam){
  *tam = verifyListInt(str);
    
  int tamanho = *tam;




  int *lista = (int *) malloc((sizeof(int) * tamanho));

  if (tamanho == 0){
    return NULL;
  }
  

  char convert[1000];
  int pc = 0;
  int count = 0;
  int count2 = 0;


  for (int i = 0; i < strlen(str); i++){
    if ((str[i] == ' ' || str[i + 1] == '\0') && pc == 1) {
      if (str[i + 1] == '\0') {
        convert[count] = str[i];
        count++;
      }
      pc = 0;
      convert[count] = '\0';
      lista[count2] = atoi(convert);
      count2++;
      count = 0;
    }
    
    if (isdigit(str[i + 1]) || (i == 0 && isdigit(str[i]))) {
      if (pc == 0) {
        pc = 1;
      }
    }
    
    if (isdigit(str[i]) && pc == 1) {
      convert[count] = str[i];
      count++;
    }

  }

  return lista;
}



int main(void) {
  char str[50];

  scanf("%[^\n]s",str);
  //gets(str);

  //if(verifyListInt(str) == NULL) printf("String invalida\n");
  //else printf("%i\n", verifyListInt(str));
  
  int tamanho;

  int *lista = splitInt(str, &tamanho);
  if (lista == NULL) printf("String Invalida\n");

  for (int i = 0; i < tamanho; i++){
    if (i == 0) printf("V = {%i,", lista[i]);
    else if (i == tamanho-1) printf(" %i}\n", lista[i]);
    else printf(" %i,", lista[i]);
  }
  
  return 0;
}
