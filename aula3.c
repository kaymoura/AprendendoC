#include<stdio.h>
#include<locale.h> // habilita a fun��o de acentua��o

// AULA DE FILAAAAAAAAAA e acentua��o

// define o tamanho da fila
#define TAMFILA 10


int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0; //primeiro numero
int tail = 0; //numero de elementos

void lista_elementos()
{
    printf("\n====================FILA ATUAL====================\n");

    // inicializa variavel/ condi��o/ incrementa
    for(int i=0; i<TAMFILA; i++)
    {
        printf("-");
        printf("|%d|",fila[i]);
        printf("-");
    }
}

//Adiciona o elemento na fila
void enqueue()
{
    int val; // Receber o numero do mardito

    /* Se o num de elementos for menor que a fila - adiciona
    * Se n�o falamos que a fila esta cheia
    */
    if(tail < TAMFILA)
    {
        printf("Informe o valor para adicionar na fila ");
        scanf("%d",&val);
        fila[tail]=val; // evidencia uma correla��o
        tail = tail + 1;
        lista_elementos(); // Para poder ver o processo
    }
    else
    {
        printf("Mano n�o cabe, fila cheia!");
    }
}

// Remover uma pessoa da fila - chamar
void dequeue()
{
    /*  Head so pode ser menor < que o tail
    * Pq se for igual a fila esta vazia, nao tem ninguem para tirar
    */
    if(head < tail)
    {
        fila[head] = 0;
        head = head + 1;
        lista_elementos();
    }
}

//Limpa a fila
void clear()
{
    for(int i=0; i < TAMFILA; i++)
    {
        fila[i]=0;
    }
    head = 0;
    tail = 0;
}

int main()
{
    lista_elementos();
    //setlocale(LC_ALL,NULL); //linguagem local convertido pro ingles
    //setlocale(LC_ALL,""); //linguagem local convertido pro sistema operacional
    //setlocale(LC_ALL,"Portuguese"); //linguagem local convertido pro portugu�s
    //printf("%s",setlocale(LC_ALL,"Portuguese"));
    //printf("cora��o");


    return 0;
}
