/*Endereço de Memória:
O endereço de memória de uma variável em C é representado pelo operador &.
Ele retorna o endereço onde a variável está armazenada na memória.
Aqui está um exemplo:*/


#include <stdio.h>

int main() {
    int x = 10;

    printf("O valor de x é: %d\n", x);
    printf("O endereço de x na memória é: %p\n", &x);

    return 0;
}
/*
Neste exemplo, declaramos a variável x e usamos o operador &
para obter seu endereço de memória. O %p é o especificador de
formato usado para imprimir valores de ponteiros.*/
