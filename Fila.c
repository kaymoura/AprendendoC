/*Fila:
Uma fila segue o princ�pio FIFO (First-In, First-Out), onde o primeiro
elemento inserido � o primeiro a ser removido. Aqui est� um exemplo de
implementa��o de uma fila em C: */


#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura da fila
struct Queue {
    int capacity;
    int front;
    int rear;
    int size;
    int* array;
};

// Fun��o para criar uma fila
struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = capacity - 1;
    queue->size = 0;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Fun��o para verificar se a fila est� cheia
int isFull(struct Queue* queue) {
    return queue->size == queue->capacity;
}

// Fun��o para verificar se a fila est� vazia
int isEmpty(struct Queue* queue) {
    return queue->size == 0;
}

// Fun��o para adicionar um elemento � fila
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Erro: a fila est� cheia.\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size++;
    printf("%d foi adicionado � fila.\n", item);
}

// Fun��o para remover um elemento da fila
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Erro: a fila est� vazia.\n");
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

/*Neste exemplo, a fun��o enqueue adiciona um elemento � fila,
 enquanto a fun��o dequeue remove o elemento mais antigo.
 O resultado ser� a impress�o do elemento removido, que neste
 caso � o n�mero 3.*/
