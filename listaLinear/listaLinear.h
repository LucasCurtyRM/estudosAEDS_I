#include <stdio.h>
#include <stdlib.h>
#define InicioArranjo 0
#define MaxTam 1000

typedef struct{
    int valor;
}Item;

typedef struct{
    int Item[MaxTam];
    int Primeiro, Ultimo;
}Lista;

void FLVazia(Lista* lista);
int LehVazia(Lista* lista);
int LInsere(Lista* lista, int p, Item valor);
int LRetira(Lista* lista, int p, Item* ptrValor);
