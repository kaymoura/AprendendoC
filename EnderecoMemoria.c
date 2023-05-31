/*Endere�o de Mem�ria:
O endere�o de mem�ria de uma vari�vel em C � representado pelo operador &.
Ele retorna o endere�o onde a vari�vel est� armazenada na mem�ria.
Aqui est� um exemplo:*/


#include <stdio.h>

int main() {
    int x = 10;

    printf("O valor de x �: %d\n", x);
    printf("O endere�o de x na mem�ria �: %p\n", &x);

    return 0;
}
/*
Neste exemplo, declaramos a vari�vel x e usamos o operador &
para obter seu endere�o de mem�ria. O %p � o especificador de
formato usado para imprimir valores de ponteiros.*/
