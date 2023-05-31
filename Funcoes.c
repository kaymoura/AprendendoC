/*Funções:
As funções em C são blocos de código que realizam uma tarefa específica.
Elas são usadas para dividir um programa em partes menores e mais gerenciáveis,
melhorando a legibilidade e reutilização do código. Uma função pode receber
argumentos, realizar cálculos ou operações e retornar um valor. Aqui está um
exemplo de declaração e uso de uma função em C:*/


#include <stdio.h>

// Declaração da função
int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(5, 3); // Chamada da função soma

    printf("A soma é: %d\n", resultado);

    return 0;
}
/*
Neste exemplo, declaramos uma função chamada soma que recebe
 dois argumentos inteiros e retorna a soma deles. No main(),
 chamamos a função soma passando os valores 5 e 3, e atribuímos
  o resultado à variável resultado. Em seguida, imprimimos o valor de resultado.*/
