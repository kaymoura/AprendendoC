/*
Lista Encadeada:
Uma lista encadeada é uma estrutura de dados em que cada nó contém um
 valor e um ponteiro para o próximo nó. Aqui está um exemplo de como
 você pode implementar uma lista encadeada simples em C:
*/

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
struct Node {
    int data;
    struct Node* next;
};

// Função para adicionar um novo nó ao início da lista
void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Função para imprimir os elementos da lista
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Exemplo de uso da lista encadeada
int main() {
    struct Node* head = NULL;

    insertNode(&head, 3);
    insertNode(&head, 7);
    insertNode(&head, 9);

    printList(head);

    return 0;
}
/*
Neste exemplo, a função insertNode adiciona um novo nó no início
 da lista, enquanto a função printList imprime os elementos da lista.
 O resultado será a impressão dos valores 9, 7 e 3. */
