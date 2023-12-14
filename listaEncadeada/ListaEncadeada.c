#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

// Inicializa a Lista Vazia
Lista* inicializar() {
  // Aloca dinamicamente a lista na memória
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    if(lista == NULL){
      printf("Erro ao alocar na memória");
    }
    // Inicializa tanto o inicio quanto o final como NULL, já que são os mesmos
    lista->inicio = NULL;
    lista->fim = NULL;

    lista->tam = 0;
    
    return lista;
}

// Insere no final da Lista um valor passado
void inserirFinal(Lista* lista, int valor) {
  // Aloca dinamicamente um Nó na Lista
  No* novo = (No*) malloc(sizeof(No));
  if(novo == NULL){
    printf("Erro ao alocar na memória");
  }
  // Atribuiu o valor passado para o Nó
  novo->valor = valor;
  // O ponteiro para o proximo item da lista será NULL, visto que está adicionando Nó aoa final da lista
  novo->proximo = NULL;


  if(lista->inicio == NULL) {
    // Verifica se o final da lista é o inicio, caso for adiciona o primeiro item à lista
    lista->inicio = novo;
    lista->fim = novo;
  } else {
    // Adiciona o Nó ao final da lista, atribuindo o ponteiro do penultimo(antigo ultimo) para o ultimo(novo ultimo)
    lista->fim->proximo = novo;
    lista->fim = novo;
  }
  // Acrescenta a variavel que o tamanho da lista aumentou
  lista->tam++;
  printf("Inserido no final da lista o elemento: %d\n", valor);
}

// Remover o primiero Nó da Lista
void removerInicio(Lista* lista) {
  // Verifica se a lista já esta Vazia
  if(lista->inicio == NULL) {
    printf("Lista vazia!\n");
    return;
  }
  // Cria um Nó auxiliar para armazenar o ponteiro do primeiro Nó da lista
  No* temp = lista->inicio;
  // O primeiro Nó que será removido vira o antigo segundo(novo primeiro);
  lista->inicio = lista->inicio->proximo;

  // Verifica se o primeiro é NULL, se for o ultimo(novo primeiro) terá o ponteiro apontando para NULL
  if(lista->inicio == NULL)
    lista->fim = NULL;
  
  // Libera a variavel temp da memeoria
  free(temp);
  
  
  //Retira 1, da variavel que armazena o tam da lista 
  lista->tam--;
  printf("Removido o primeiro elemento da lista!\n\n");
}


// Imprime a Lista
void imprimirLista(Lista* lista) {
    // Atribui um Nó temporario o primeiro Nó
    No* temp = lista->inicio;

    if(temp == NULL){
        printf("Lista Vazia!\n");
    }else{
        printf("Listagem: \n[ ");
        while(temp != NULL) {
            printf("%d ", temp->valor);
            temp = temp->proximo;
        }
        printf("]\n");
    }
    
  printf("\n");
}
