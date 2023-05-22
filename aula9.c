/*
    Lista encadeada - lista -lista ligada - linked list

    A lista encadeada possui além do seu valor um ponteiro
    apontando para o proximo elemento.
    Esse elemento, tem o valor 1
    Se não tiver apontando para outra lista,
    apontará para null
    ----
    |1| | -> NULL
    ----
    Essa lsita anterior - aponta para essa nova lista
    e essa nova lista aponta para nulo.
    ----     ----
    |1| | -> |4| | -> NULL
    ----     ----

    Adicionando um novo elemento na lista
    Esse 7 vai apontar para o NULL
    Ela é encadeada por que dentro dos valores
    Além de seus valores tem um ponteiro apontando
    para o próximo elemento da lista.
    E se for o ultimo da lista apontará para nulo.

    ----     ----     ----
    |1| | -> |4| | -> |7| | -> NULL
    ----     ----     ----
*/
#include<stdio.h>
#include<stdlib.h> // Para ultilizar funções como maloc(), free() e exit(). Alocação de função de memoria
#include<locale.h>
#include<string.h>

struct estrutura_no
{
    int valor; // Armazena um valor inteiro no no
    struct estrutura_no *prox;
    // Estrutura no que é um ponteiro apontando para o proximo no da lista encadeada.
};

typedef struct estrutura_no no;
// Define um apelido para a estrutura_no
// Facilitando sua ultilização

// Função que força a lista se vazia
// Função que verificará se a lista está vazia ou não
// Ela vai receber um ponteiro do tipo nó que chamaremos list_Enc
// Verificar se o proximo elemento da lista é NULL
int vazia(no *list_Enc)
{
    if(list_Enc -> prox = NULL)
    {
        // Se na nossa list_Enc o próximo elemento dela estiver apontando para NULL
        // Retorna 1
        return 1; // para vazia
    }
    else
    {
        return 0; // lista não está vazia
    }
}

void inicia(no *list_Enc)
{
    list_Enc -> prox = NULL
                       // Vamos fazer a list_Enc apontar para NULL
}

// Função para liberar a memoria alocada
// para os nós da lista encadeada
// liberar cadeira q sobro cinema
void libera(no *list_Enc)
{
    if(!vazia(list_Enc))
    {
        // Se a lista não estiver vazia antes de liberar a memoria
        no *proxNo, *atual;
        // Criamos duas variaveis do tipo ponteiro para nó (proximo no e atual)
        atual = list_Enc -> prox;
        while(atual != NULL)
        {
            proxNo = atual -> prox;
            free(atual);
            atual = proxNo;
        }
    }
}

// inserir elemento atras e na frente
