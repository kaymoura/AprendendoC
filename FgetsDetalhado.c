/* FGETS
A fun��o fgets � usada para ler uma linha de texto de entrada. Ela recebe tr�s argumentos:
 o primeiro � um ponteiro para a vari�vel onde a linha de texto ser� armazenada, o segundo
  � o tamanho m�ximo de caracteres a serem lidos (incluindo o caractere nulo \0 de final
  de string) e o terceiro � a fonte de entrada, que geralmente � stdin para a entrada padr�o (teclado).

A fun��o fgets l� a linha de texto at� encontrar um caractere de nova linha (\n) ou at� atingir
o tamanho m�ximo especificado. Ela armazena a linha de texto em um array de caracteres (string),
incluindo o caractere de nova linha no final, se houver espa�o suficiente.

� importante mencionar que a fun��o fgets tamb�m armazena o caractere de nova linha (\n) no array
 se houver espa�o suficiente. Se a linha de texto preencher todo o espa�o dispon�vel no array, o
 caractere de nova linha n�o ser� armazenado.

Aqui est� um exemplo que ilustra o uso do fgets para ler uma linha de texto e removendo o
caractere de nova linha: */


#include <stdio.h>

int main() {
    char texto[50];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Removendo o caractere de nova linha, se existir
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
        i++;
    }

    printf("O texto digitado �: %s\n", texto);

    return 0;
}
/*
Neste exemplo, declaramos um array de caracteres texto com tamanho 50.
Usamos a fun��o fgets para ler uma linha de texto e armazen�-la em texto.
Em seguida, percorremos o array procurando pelo caractere de nova linha
(\n) e substituindo-o por um caractere nulo (\0) para remover o \n.
Por fim, imprimimos o texto sem o caractere de nova linha.*/
