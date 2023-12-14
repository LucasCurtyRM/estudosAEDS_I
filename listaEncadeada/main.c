#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"
int main() {

    // Inicializa a LIsta Vazia
    Lista* lista = inicializar();

    printf("*** Inicializando a Lista!!! ***\n\n\n");
    // Imprime a Lista Após a Inicialização (Vazia)
    imprimirLista(lista);
    
    // Insere valores na lista
    inserirFinal(lista, 5);
    inserirFinal(lista, 11);
    inserirFinal(lista, 20);
    inserirFinal(lista, 10);

    // Imprime a Lista completa
    imprimirLista(lista);

    // Remove o primeiro item da lista
    removerInicio(lista);

    // Imprime a Lista atualizada
    imprimirLista(lista);

    // Liber ao espaço onde a variavel (lista) estáva na memória
    free(lista);

    return 0;
}
