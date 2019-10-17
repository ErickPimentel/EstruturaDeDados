#include <stdio.h>
#include <string.h>

typedef struct M{
  char nome[1001];
  float altura;
} modelo;



int main(void) {
  
  int qtd_modelos;
  float altura;
  float alturadesejada;
  char nome[1001];

  scanf("%i", &qtd_modelos);
  scanf("%f", &alturadesejada);

  modelo lista_modelos[qtd_modelos];

  int i = 0;
  for(i = 0; i < qtd_modelos; i++){
    scanf("%s %f", nome, &altura);
    strcpy(lista_modelos[i].nome, nome);
    lista_modelos[i].altura = altura;
  }  
  
  i = 0;
  int f = qtd_modelos;
  int m;
  char nomecerto[1001];
  while(f >= i){
    m = (i + f) / 2;
    if(lista_modelos[m].altura >= alturadesejada){
      strcpy(nomecerto, lista_modelos[m].nome);
      f = m - 1;
    }
    else{
      i = m + 1;
    }
  }

  printf("%s\n", nomecerto);
  
  return 0;
}
