/*fgets:
A função fgets é usada para ler uma linha de texto de entrada do usuário
ou de um arquivo em C. Ela recebe como argumentos a variável para armazenar
a linha, o tamanho máximo de caracteres a serem lidos e a fonte de entrada.
Aqui está um exemplo de uso da função fgets: */


#include <stdio.h>

int main() {
    char nome[50];
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê uma linha de texto e a armazena em nome

    printf("O nome digitado é: %s", nome);

    return 0;
}
/*
Neste exemplo, pedimos ao usuário para digitar o nome, e a função fgets lê uma linha de texto*/
