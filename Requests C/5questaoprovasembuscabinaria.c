#include <stdio.h>
#include <string.h>

typedef struct M{
  char nome[1001];
  float altura;
} Modelo;


int main(void) {

  int qtdmodelo;
  float alturadesejada;
  scanf("%i", &qtdmodelo);
  scanf("%f", &alturadesejada);

  Modelo listamodelo[qtdmodelo];

  char nome[1001];
  float altura;

  for(int i = 0; i != qtdmodelo; i++){
    scanf("%s", nome);
    scanf("%f", &altura);
    strcpy(listamodelo[i].nome, nome);
    listamodelo[i].altura = altura;
  }

  int armazena = 0;
  char nomecerto[1001];
  float alturacerta = 0;
  for(int i = 0; i != qtdmodelo; i++){
    if (listamodelo[i].altura > alturadesejada){
      strcpy(nomecerto, listamodelo[i-1].nome);
      alturacerta =  listamodelo[i-1].altura;
    }
  }


  printf("%s %f", nomecerto, alturacerta);

  
  


  return 0;
}
