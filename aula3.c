#include<stdio.h>
#include<locale.h> // habilita a função de acentuação

// AULA DE FILAAAAAAAAAA e acentuação

// define o tamanho da fila
#define TAMFILA 10


int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0; //primeiro numero
int tail = 0; //numero de elementos

void lista_elementos()
{
    printf("\n====================FILA ATUAL====================\n");

    // inicializa/ condição/ incrementa
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
    //setlocale(LC_ALL,"Portuguese"); //linguagem local convertido pro português
    //printf("%s",setlocale(LC_ALL,"Portuguese"));
    //printf("coração");


    return 0;
}
