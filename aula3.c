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

    // inicializa/ condi��o/ incrementa
    for(int i=0; i<TAMFILA; i++)
    {
        printf("-");
        printf("|%d|",fila[i]);
        printf("-");
    }
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
