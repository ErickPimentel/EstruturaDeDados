#include <stdio.h>
#include <string.h>
#define MAX 500

typedef struct C {
  char nome[50];
  int idade;

}CLIENTE;

typedef struct L{
  CLIENTE vetor[MAX];
  int nElem;
}LISTA;

void criarlista(LISTA * lista){
  lista->nElem = 0;
}

void inserirFinal(LISTA * lista, CLIENTE c1){
  lista->vetor[lista->nElem] = c1;
  lista->nElem++;
}

void inserirPosicao(LISTA * lista, int pos, CLIENTE c1){
  if(pos >= lista->nElem){
    inserirFinal(lista, c1);
  }
  else{
    for(int i = lista->nElem; i > pos; i--){
      lista->vetor[i] = lista->vetor[i-1];
    }
    lista->vetor[pos] = c1;
    lista->nElem++;
  }
}

void inserirInicio(LISTA * lista, CLIENTE c1){
  inserirPosicao(lista, 0, c1);
}

CLIENTE * acessarApartirInicio(LISTA * lista, int pos){
  if(pos < lista->nElem) return &lista->vetor[pos];
  else return NULL;
}

CLIENTE * acessarApartirFim(LISTA * lista, int pos){
  if(pos < lista->nElem) return &lista->vetor[lista->nElem - pos-1];
  else return NULL;
}

void listarInicioAoFim(LISTA * lista){
  CLIENTE c1;
  for(int i = 0; i != lista->nElem; i++){
    printf("nome: %s\n", lista->vetor[i].nome);
    printf("idade: %i\n\n", lista->vetor[i].idade);
  }
}

void listarFimAoInicio(LISTA * lista){
  CLIENTE c1;
  for(int i = lista->nElem-1; i >= 0; i--){
    printf("nome: %s\n", lista->vetor[i].nome);
    printf("idade: %i\n\n", lista->vetor[i].idade);
  }
}

void eliminarPosicao(LISTA * lista, int pos){
  if(pos < lista->nElem){
    if(pos == lista->nElem-1){
      lista->nElem = lista->nElem-1;
    }
    else{
      for(int i = pos; i < lista->nElem-1;i++){
        lista->vetor[i] = lista->vetor[i+1];
      }
      lista->nElem--;
    }
  }
}
CLIENTE * BuscarEnderecoNome(char nome[], LISTA * lista){
  CLIENTE c1;
  for(int i = 0; i != lista->nElem; i++){
    if(strcmp(nome, lista->vetor[i].nome) == 0){
      return &lista->vetor[i].nome;
    }
    return NULL;
  }

}

CLIENTE * BuscarPosicaoNome(char nome[], LISTA * lista){
  CLIENTE c1;
  for(int i = 0; i != lista->nElem; i++){
    if(strcmp(nome, lista->vetor[i].nome) == 0){
      return i;
    }
    return -1;
  }

}

int tamanho(LISTA * lista){
  return lista->nElem;
}

void destruir(LISTA * lista){
  lista->nElem = 0;
}


int main() {

  int op = 0;
  LISTA lista;
  criarlista(&lista);

  CLIENTE c1;
  CLIENTE *cp;

  int pos;
  char nome[50];


  do{
    printf("1 - Criar Lista\n");
    printf("2 - Inserir Incio\n");
    printf("3 - Inserir Final\n");
    printf("4 - Inserir Posicao\n");
    printf("5 - Acessar a partir incicio\n");
    printf("6 - Acessar a partir fim\n");
    printf("7 - Listar do inicio ao fim\n");
    printf("8 - Listar do fim ao inicio\n");
    printf("9 - Eliminar\n");
    printf("10 - Buscar nome retorna endereco\n");
    printf("11 - Buscar nome retorna posicao\n");
    printf("12 - Tamanho da lista\n");
    printf("13 - Destruir\n");
    printf("14 - Sair\n");

    printf("opcao: ");
    scanf("%i", &op);
    switch(op){
      case 1:
            criarlista(&lista);
            break;
      case 2:
            printf("nome: ");
            scanf("%s", c1.nome);
            printf("idade: ");
            scanf("%i", &c1.idade);
            inserirInicio(&lista, c1);
            break;
      case 3:
            printf("nome: ");
            scanf("%s", c1.nome);
            printf("idade: ");
            scanf("%i", &c1.idade);
            inserirFinal(&lista, c1);
            break;
      case 4:
            printf("nome: ");
            scanf("%s", c1.nome);
            printf("idade: ");
            scanf("%i", &c1.idade);
            int pos;
            printf("posicao: ");
            scanf("%i", &pos);
            inserirPosicao(&lista, pos, c1);
            break;
      case 5:
            printf("posicao: ");
            scanf("%i", &pos);
            cp = acessarApartirInicio(&lista, pos);
            if(cp != NULL){
              printf("nome: %s\n", cp->nome);
              printf("idade: %i\n", cp->idade);
            }
            else{
              printf("posicao nao existe\n");
            }
            break;
      case 6:
            printf("posicao: ");
            scanf("%i", &pos);
            cp = acessarApartirFim(&lista, pos);
            if(cp != NULL){
              printf("nome: %s\n", cp->nome);
              printf("idade: %i\n", cp->idade);
            }
            else{
              printf("posicao nao existe\n");
            }
            break;
      case 7:
            listarInicioAoFim(&lista);
            break;
      case 8:
            listarFimAoInicio(&lista);
            break;
      case 9:
            printf("posicao: ");
            scanf("%i", &pos);
            eliminarPosicao(&lista, pos);
            break;
      case 10:
            printf("nome: ");
            scanf("%s", nome);
            cp = BuscarEnderecoNome(nome, &lista);
            if(cp != NULL){
              printf("nome: %s\n", cp->nome);
              printf("idade: %i\n", cp->idade);
            }
            else{
              printf("nao existe o nome\n");
            }
            break;
      case 11:
            printf("nome: ");
            scanf("%s", nome);
            pos = BuscarEnderecoNome(nome, &lista);
            if(pos >= 0){
              printf("posicao: ");
              cp = acessarApartirInicio(&lista, pos);
              printf("nome: %s\n", cp->nome);
              printf("idade: %i\n", cp->idade);

             
            }
            else{
              printf("nao existe o nome\n");
            }
            break;
      case 12:
            printf("tamanho: %i", tamanho(&lista));
            break;
      case 13:
            destruir(&lista);
            break;
    }
  }while(op!=14);
  return 0;
}
