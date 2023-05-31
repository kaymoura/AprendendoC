/* FGETS
A função fgets é usada para ler uma linha de texto de entrada. Ela recebe três argumentos:
 o primeiro é um ponteiro para a variável onde a linha de texto será armazenada, o segundo
  é o tamanho máximo de caracteres a serem lidos (incluindo o caractere nulo \0 de final
  de string) e o terceiro é a fonte de entrada, que geralmente é stdin para a entrada padrão (teclado).

A função fgets lê a linha de texto até encontrar um caractere de nova linha (\n) ou até atingir
o tamanho máximo especificado. Ela armazena a linha de texto em um array de caracteres (string),
incluindo o caractere de nova linha no final, se houver espaço suficiente.

É importante mencionar que a função fgets também armazena o caractere de nova linha (\n) no array
 se houver espaço suficiente. Se a linha de texto preencher todo o espaço disponível no array, o
 caractere de nova linha não será armazenado.

Aqui está um exemplo que ilustra o uso do fgets para ler uma linha de texto e removendo o
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

    printf("O texto digitado é: %s\n", texto);

    return 0;
}
/*
Neste exemplo, declaramos um array de caracteres texto com tamanho 50.
Usamos a função fgets para ler uma linha de texto e armazená-la em texto.
Em seguida, percorremos o array procurando pelo caractere de nova linha
(\n) e substituindo-o por um caractere nulo (\0) para remover o \n.
Por fim, imprimimos o texto sem o caractere de nova linha.*/
