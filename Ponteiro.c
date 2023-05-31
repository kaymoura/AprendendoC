/*Ponteiro:
Um ponteiro � uma vari�vel que armazena o endere�o de mem�ria de
outra vari�vel. Ele permite manipular indiretamente vari�veis e
estruturas de dados, acessando e modificando seu conte�do por meio
 do endere�o de mem�ria. Aqui est� um exemplo que demonstra o uso
 de ponteiros em C: */


#include <stdio.h>

int main() {
    int x = 10;  // Vari�vel inteira
    int* ptr;    // Ponteiro para um inteiro

    ptr = &x;    // Atribui o endere�o de x ao ponteiro ptr

    printf("O valor de x �: %d\n", x);
    printf("O valor de x acessado pelo ponteiro �: %d\n", *ptr);

    *ptr = 20;   // Modifica o valor de x atrav�s do ponteiro

    printf("O novo valor de x �: %d\n", x);

    return 0;
}
/*
Neste exemplo, declaramos a vari�vel inteira x e o ponteiro ptr para
 um inteiro. Em seguida, atribu�mos o endere�o de x ao ponteiro usando
  o operador &. O operador * � usado para acessar o valor armazenado
  no endere�o apontado pelo ponteiro. Modificar o valor atrav�s do
  ponteiro afeta diretamente a vari�vel x.*/
