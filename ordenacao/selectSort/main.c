#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
}Item;

void SelectSort(Item* vetor, int tamanho){
    int i, j, min;
    Item aux;
    for (i = 0; i < tamanho - 1; i ++){
        min = i;
        for(j = i + 1; j < tamanho; j++){
            if(vetor[min].valor > vetor[j].valor){
                min = j;
            }
        }
        aux = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = aux;
    }
}

int main(){
    int tam = 9;
    Item vetor[] = {{9}, {3}, {4}, {2}, {5}, {6}, {8}, {1}, {7}};
    SelectSort(vetor, tam);
    for(int x = 0; x < tam; x++){
        printf("%d ", vetor[x].valor);
    }
    return 0;
}
