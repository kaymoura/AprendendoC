/*Pilha:
Uma pilha segue o princípio LIFO (Last-In, First-Out), onde o último elemento
 inserido é o primeiro a ser removido. Aqui está um exemplo de implementação
 de uma pilha em C:
*/

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da pilha
struct Stack {
    int capacity;
    int top;
    int* array;
};

// Função para criar uma pilha
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Função para verificar se a pilha está cheia
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Função para verificar se a pilha está vazia
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Função para adicionar um elemento à pilha
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Erro: a pilha está cheia.\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d foi adicionado à pilha.\n", item);
}

// Função para remover um elemento da pilha
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Erro: a pilha está vazia.\n");
        return -1;
    }
    return stack->array[stack->top--];
}

// Exemplo de uso da pilha
int main() {
    struct Stack* stack = createStack(5);

    push(stack, 3);
    push(stack, 7);
    push(stack, 9);

    printf("%d foi removido da pilha.\n", pop(stack));

    return 0;
}
/*
Neste exemplo, a função push adiciona um elemento à pilha, enquanto
 a função pop remove o elemento mais recente. O resultado será a
 impressão do elemento removido, que neste caso é o número 9.*/
