/*
    Lista encadeada - lista -lista ligada - linked list

    A lista encadeada possui al�m do seu valor um ponteiro
    apontando para o proximo elemento.
    Esse elemento, tem o valor 1
    Se n�o tiver apontando para outra lista,
    apontar� para null
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
    Ela � encadeada por que dentro dos valores
    Al�m de seus valores tem um ponteiro apontando
    para o pr�ximo elemento da lista.
    E se for o ultimo da lista apontar� para nulo.

    ----     ----     ----
    |1| | -> |4| | -> |7| | -> NULL
    ----     ----     ----
*/
#include<stdio.h>
#include<stdlib.h> // Para ultilizar fun��es como maloc(), free() e exit(). Aloca��o de fun��o de memoria
#include<locale.h>
#include<string.h>

struct estrutura_no
{
    int valor; // Armazena um valor inteiro no no
    struct estrutura_no *prox;
    // Estrutura no que � um ponteiro apontando para o proximo no da lista encadeada.
};

typedef struct estrutura_no no;
// Define um apelido para a estrutura_no
// Facilitando sua ultiliza��o

// Fun��o que for�a a lista se vazia
// Fun��o que verificar� se a lista est� vazia ou n�o
// Ela vai receber um ponteiro do tipo n� que chamaremos list_Enc
// Verificar se o proximo elemento da lista � NULL
int vazia(no *list_Enc)
{
    if(list_Enc -> prox = NULL)
    {
        // Se na nossa list_Enc o pr�ximo elemento dela estiver apontando para NULL
        // Retorna 1
        return 1; // para vazia
    }
    else
    {
        return 0; // lista n�o est� vazia
    }
}

void inicia(no *list_Enc)
{
    list_Enc -> prox = NULL
                       // Vamos fazer a list_Enc apontar para NULL
}

// Fun��o para liberar a memoria alocada
// para os n�s da lista encadeada
// liberar cadeira q sobro cinema
void libera(no *list_Enc)
{
    if(!vazia(list_Enc))
    {
        // Se a lista n�o estiver vazia antes de liberar a memoria
        no *proxNo, *atual;
        // Criamos duas variaveis do tipo ponteiro para n� (proximo no e atual)
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
