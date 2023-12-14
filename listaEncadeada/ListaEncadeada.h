typedef struct No {
    // Dados que o nó (celula), irá possuir
    int valor;
    // Apota para o próximo Nó da lista
    struct No *proximo;
} No;

typedef struct {
    // Declara o Primeiro e o Ultimo  Nó da Lista 
    No *inicio, *fim;
    // Tamanho que a Lista possuiu
    int tam;
} Lista;

// Inicializa a Lista Vazia
Lista* inicializar();

// Insere no final da Lista um valor
void inserirFinal(Lista* lista, int valor);

// Função para remover o primeiro item da lista
void removerInicio(Lista* lista);

// Função para Imprimir a Lista
void imprimirLista(Lista* lista);