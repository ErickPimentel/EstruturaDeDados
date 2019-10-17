#include <stdio.h>
#include "listalinear.h"

int main() {
    lista *l = criaLista(5);
    insere(l,10);
    insere(l,20);
    insere(l,5);
    printLista(*l);
    //printf("O elemento esta na posicao: %i\n", hasElement(l,5));
    insertPosition(l,99,3);
    insertPosition(l,100,4);
    printLista(*l);
    removeElement(l,99);
    printLista(*l);
	removeElement(l,100);
    printLista(*l);

    return 0;
}
