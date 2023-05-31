/*fgets:
A fun��o fgets � usada para ler uma linha de texto de entrada do usu�rio
ou de um arquivo em C. Ela recebe como argumentos a vari�vel para armazenar
a linha, o tamanho m�ximo de caracteres a serem lidos e a fonte de entrada.
Aqui est� um exemplo de uso da fun��o fgets: */


#include <stdio.h>

int main() {
    char nome[50];
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin); // L� uma linha de texto e a armazena em nome

    printf("O nome digitado �: %s", nome);

    return 0;
}
/*
Neste exemplo, pedimos ao usu�rio para digitar o nome, e a fun��o fgets l� uma linha de texto*/
