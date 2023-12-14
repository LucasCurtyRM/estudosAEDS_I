#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
}Item;

void ShellSort(Item* vetor, int tamanho){
    int i, j;
    int h = 1;
    Item aux;
    while (h < tamanho){
        h = 3 * h + 1;
    }

    while (h > 1){
        h = h / 3;
        for(i = h; i < tamanho; i++){
            aux = vetor[i];
            j = i - h;
            while(j >= 0 && aux.valor < vetor[j].valor){
                vetor[j + h] = vetor[j];
                j-= h;
            }
            vetor[j + h] = aux;
        }
    }
}
int main(){
    int tam = 9;
    Item vetor[] = {{9}, {3}, {1}, {2}, {5}, {6}, {8}, {4}, {7}};
    ShellSort(vetor, tam);
    for (int x = 0; x < tam; x++){
        printf("%d ", vetor[x].valor);
    }
    return 0;
}