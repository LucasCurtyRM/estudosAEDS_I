#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
}Item;

void InsertSort(Item* vetor, int tamanho){
    int i, j;
    Item aux;
    for (i = 1; i < tamanho; i++){
        aux = vetor[i];
        j = i - 1;
        while (( j >= 0) && (aux.valor < vetor[j].valor)){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }
}

int main (){
    int tam = 9;
    Item vetor[] = {{9}, {3}, {4}, {8}, {5}, {6}, {2}, {1}, {7}};
    InsertSort(vetor, tam);
    for (int x = 0; x < tam; x++){
        printf("%d ", vetor[x].valor);
    }
    return 0;
}