#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char ent[61];
  char cpf[11];
  char num1[61], num2[61];

  scanf("%s", ent);

  int i = 0;
  int contador = 0;
  int cn1 = 0;
  for(i = 0; ent[i] != '\0'; i++){
    if (ent[i] >= '0' && ent[i] <= '9' && contador < 11){
      cpf[contador] = ent[i];
      contador++;
    }
    else if ((ent[i] >= '0' && ent[i] <= '9') || ent[i] == '.'){
      num1[cn1] = ent[i];
      cn1++;
    }

  }

  cpf[contador] = '\0';
  num1[cn1] = '\0';

  char ent2[61];
  scanf("%s", ent2);

  int cn2 = 0;
  for (i = 0; ent2[i] != '\0'; i++){
    if ((ent2[i] >= '0' && ent2[i] <= '9') || ent2[i] == '.'){
      num2[cn2] = ent2[i];
      cn2++;
    }
  }

  num2[cn2] = '\0';
  
  printf("cpf %s\n", cpf);
  printf("num1 string %s\n", num1);
  printf("num2 string %s\n", num2);

  double teste1, teste2, teste3;
  teste1 = atof(num1);
  teste2 = atof(num2);
  printf("num1 float %f\n", teste1);
  printf("num2 float %f\n", teste2);

  teste3 = teste1 + teste2;

  printf("resultado %.2f\n", teste3);



  return 0;
}
