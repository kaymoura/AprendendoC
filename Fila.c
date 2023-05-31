/*Fila:
Uma fila segue o princípio FIFO (First-In, First-Out), onde o primeiro
elemento inserido é o primeiro a ser removido. Aqui está um exemplo de
implementação de uma fila em C: */


#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da fila
struct Queue {
    int capacity;
    int front;
    int rear;
    int size;
    int* array;
};

// Função para criar uma fila
struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = capacity - 1;
    queue->size = 0;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Função para verificar se a fila está cheia
int isFull(struct Queue* queue) {
    return queue->size == queue->capacity;
}

// Função para verificar se a fila está vazia
int isEmpty(struct Queue* queue) {
    return queue->size == 0;
}

// Função para adicionar um elemento à fila
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Erro: a fila está cheia.\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size++;
    printf("%d foi adicionado à fila.\n", item);
}

// Função para remover um elemento da fila
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Erro: a fila está vazia.\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}

// Exemplo de uso da fila
int main() {
    struct Queue* queue = createQueue(5);

    enqueue(queue, 3);
    enqueue(queue, 7);
    enqueue(queue, 9);

    printf("%d foi removido da fila.\n", dequeue(queue));

    return 0;
}

/*Neste exemplo, a função enqueue adiciona um elemento à fila,
 enquanto a função dequeue remove o elemento mais antigo.
 O resultado será a impressão do elemento removido, que neste
 caso é o número 3.*/
