/*Fun��es:
As fun��es em C s�o blocos de c�digo que realizam uma tarefa espec�fica.
Elas s�o usadas para dividir um programa em partes menores e mais gerenci�veis,
melhorando a legibilidade e reutiliza��o do c�digo. Uma fun��o pode receber
argumentos, realizar c�lculos ou opera��es e retornar um valor. Aqui est� um
exemplo de declara��o e uso de uma fun��o em C:*/


#include <stdio.h>

// Declara��o da fun��o
int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(5, 3); // Chamada da fun��o soma

    printf("A soma �: %d\n", resultado);

    return 0;
}
/*
Neste exemplo, declaramos uma fun��o chamada soma que recebe
 dois argumentos inteiros e retorna a soma deles. No main(),
 chamamos a fun��o soma passando os valores 5 e 3, e atribu�mos
  o resultado � vari�vel resultado. Em seguida, imprimimos o valor de resultado.*/
