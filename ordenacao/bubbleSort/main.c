#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
}Item;

void BubbleSort(Item* vetor, int tamanho){
    Item aux;
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - 1; j ++){
            if (vetor[j].valor > vetor[j+1].valor){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main(){
    int tam = 9;
    Item vetor[] = {{9}, {3}, {4}, {2}, {5}, {6}, {8}, {1}, {7}};
    BubbleSort(vetor, tam);
    for (int x = 0; x < tam; x++){
        printf("%d ", vetor[x].valor);
    }
    return 0;
}