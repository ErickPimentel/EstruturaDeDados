#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <stdlib.h>

typedef struct {
  uint8_t id;
  uint8_t tamanho;
  uint8_t tipo;
  uint32_t origem;
  uint32_t destino;
  int8_t *cargautil;
} Packet;


Packet *createDataPacket(uint8_t id, uint32_t origem, uint32_t destino, uint8_t tamanho){
  Packet *packet = (Packet *) malloc(sizeof(Packet));
  (*packet).id = id;
  (*packet).tipo = 0;
  (*packet).origem = origem;
  (*packet).destino = destino;
  (*packet).tamanho = tamanho;
  (*packet).cargautil = (int8_t *) malloc(tamanho * sizeof(int8_t));


  return packet;
}


Packet *createACKPacket(uint8_t id, uint32_t source_add, uint32_t destino){
  Packet * packet = (Packet *) malloc(sizeof(Packet));
  (*packet).id = id;
  (*packet).tipo = 1;
  (*packet).origem = source_add;
  (*packet).destino = destino;
  (*packet).tamanho = 0;
  (*packet).cargautil = NULL;

  return packet;

}


void writeData(Packet *packet, const int8_t *cargautil, int cargautil_tamanho){
  for(int i = 0; i < (*packet).tamanho; i++){
    if(i > cargautil_tamanho -1){
      (*packet).cargautil[i] = 0;
    }
    else{
      (*packet).cargautil[i] = cargautil[i];
    }
  }
}

Packet *clonePacket(Packet *packet){
  Packet *packet1 = (Packet *) malloc(sizeof(Packet));
  (*packet1).id = (*packet).id;
  (*packet1).origem = (*packet).origem;
  (*packet1).destino = (*packet).destino;
  (*packet1).tamanho = (*packet).tamanho;
  (*packet1).tipo = (*packet).tipo;
  (*packet1).cargautil = (int8_t *) malloc((*packet).tamanho * sizeof(int8_t));

    
  for (int8_t i = 0; i < (*packet1).tamanho ; i++) {
    (*packet1).cargautil[i] = (*packet).cargautil[i];
  }


  return packet1;
}

void printPacketInformation(Packet *packet) {
    printf("Packet Type: %i\n", (*packet).tipo);
    printf("Packet Addr: %p\n", packet);
    printf("Payload Addr: %p\n", &packet->cargautil);
    printf("ID: %i\n", (*packet).id);
    printf("Source Address: %i\n", (*packet).origem);
    printf("Destination Address: %i\n", (*packet).destino);

    if ((*packet).tipo == 0) {
        printf("Payload Size: %i\n", (*packet).tamanho);
        printf("Payload: ");
        for (int i = 0; i < packet->tamanho; i++) {
            printf("%i ", packet->cargautil[i]);
        }
    }

    printf("\n\n\n");
 

}

void deletePacket(Packet *packet) {
    free(packet->cargautil);
    free(packet);
}

int main(void) {
    Packet *pacote = createDataPacket(0, 10, 20, 5);
    int8_t data[] = {1,2,3,4};

    writeData(pacote, data, 4);
    printPacketInformation(pacote);


    Packet *pacote2 = clonePacket(pacote);
    printPacketInformation(pacote2);

    return 0;
}
