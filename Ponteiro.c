/*Ponteiro:
Um ponteiro é uma variável que armazena o endereço de memória de
outra variável. Ele permite manipular indiretamente variáveis e
estruturas de dados, acessando e modificando seu conteúdo por meio
 do endereço de memória. Aqui está um exemplo que demonstra o uso
 de ponteiros em C: */


#include <stdio.h>

int main() {
    int x = 10;  // Variável inteira
    int* ptr;    // Ponteiro para um inteiro

    ptr = &x;    // Atribui o endereço de x ao ponteiro ptr

    printf("O valor de x é: %d\n", x);
    printf("O valor de x acessado pelo ponteiro é: %d\n", *ptr);

    *ptr = 20;   // Modifica o valor de x através do ponteiro

    printf("O novo valor de x é: %d\n", x);

    return 0;
}
/*
Neste exemplo, declaramos a variável inteira x e o ponteiro ptr para
 um inteiro. Em seguida, atribuímos o endereço de x ao ponteiro usando
  o operador &. O operador * é usado para acessar o valor armazenado
  no endereço apontado pelo ponteiro. Modificar o valor através do
  ponteiro afeta diretamente a variável x.*/
