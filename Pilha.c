/*Pilha:
Uma pilha segue o princ�pio LIFO (Last-In, First-Out), onde o �ltimo elemento
 inserido � o primeiro a ser removido. Aqui est� um exemplo de implementa��o
 de uma pilha em C:
*/

#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura da pilha
struct Stack {
    int capacity;
    int top;
    int* array;
};

// Fun��o para criar uma pilha
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Fun��o para verificar se a pilha est� cheia
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Fun��o para verificar se a pilha est� vazia
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Fun��o para adicionar um elemento � pilha
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Erro: a pilha est� cheia.\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d foi adicionado � pilha.\n", item);
}

// Fun��o para remover um elemento da pilha
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Erro: a pilha est� vazia.\n");
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
Neste exemplo, a fun��o push adiciona um elemento � pilha, enquanto
 a fun��o pop remove o elemento mais recente. O resultado ser� a
 impress�o do elemento removido, que neste caso � o n�mero 9.*/
