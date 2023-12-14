#include <stdio.h>
#include <stdlib.h>


void quickSort(int vetor[], int inicio, int fim){
    if (inicio < fim){
        int pivo = vetor[inicio];
        int i = inicio;
        int j = fim;
        int aux;

        while (i < j){
            while (vetor[i] <= pivo && i < fim){
                i++;
            }
            while (vetor[j] > pivo){
                j--;
            }
            if(i < j){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
        vetor[inicio] = vetor[j];
        vetor[j] = pivo;

        quickSort(vetor, inicio, j-1);
        quickSort(vetor, j + 1, fim);
    }
}

int main(){

    int vetor[] = {8, 3, 2, 9, 7, 6, 5, 4, 1};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    quickSort(vetor, 0, n - 1);
    int count = 0;
 
    for (int x = 0; x < n; x++){
        printf("%d ", vetor[x]);
        count++;
    }
    printf("\n %d", count);
    return 0;
}